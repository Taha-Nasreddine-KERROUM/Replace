#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strtolower ( char *str ) {
    char *st = ( char* ) malloc ( strlen( str ) + 1 );
    strcpy( st, str );
    for ( char *s = st; *s; ++s )
        *s = tolower( *s );
    return st;
}

void replace(char *str, char *wrdn, char *wrdt) {
    char temp[400] = "";
    strcpy( temp, wrdt );
    for (char *s = str; *s; ++s) {
        if (!strncmp(strtolower(s), wrdn, strlen(wrdn))) {
            strcpy( temp + strlen(wrdt), s + strlen(wrdn) );
            strcpy( s, temp );
            s += strlen(wrdt);
        }
    }
}

int main() {
    char str[400], wrdin[400], wrdout[400];
    
    printf("O'hello there home town\nEnter a string: ");
    gets(str);
    printf("the world you wanna replace: ");
    gets(wrdin);
    printf("the world's doppelganger: ");
    gets(wrdout);
    
    
    replace(str, wrdin, wrdout);
    
    printf("there you go homie: %s", str);
    
    return 0;
}
