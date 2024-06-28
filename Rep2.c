#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char *str, char *wrdn, char *wrdt) {
    char temp[400] = "";
    int n = strlen(wrdn), t = strlen(wrdt);
    for (char *s = str; *s; ++s) {
        if (!strncasecmp(s, wrdn, n)) {
            memmove(s + t, s + n, strlen(s + n) + 1);
            memmove(s, wrdt, t);
            //s += t - 1; //if you wanna make it faster with couple o' milliseconds
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
