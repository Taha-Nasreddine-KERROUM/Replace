#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

void strtolower ( char *str ) {
    for ( char *s = str; *s; ++s )
        *s = tolower( *s );
}

void replace(char *str, char *wrdn, char *wrdt) {
    char *temp;
    int n = strlen(wrdn), t = strlen(wrdt);
    strtolower(str); strtolower(wrdn);
    while ( temp = strstr( str, wrdn ) ) {
        memmove(temp + t, temp + n, strlen(temp + n) + 1);
        memmove(temp, wrdt, t);
    }
    
}

int main()
{
    char *str = ( char* ) malloc ( 400 ),
         *wrdin = ( char* ) malloc ( 400 ),
         *wrdout = ( char* ) malloc ( 400 );
    printf("O'hello there home town\nEnter a string: ");
    gets(str);
    printf("the word you wanna replace: ");
    gets(wrdin);
    printf("the word's doppelganger: ");
    gets(wrdout);
    
    replace(str, wrdin, wrdout);
    
    printf("there you go homie: %s", str);
    
    return 0;
}
