#include <stdio.h>
#define MAXLINE 1000


int is_palindr(char *s)
{
    char *ptr = s + strlen(s) - 1;

    while(s != ptr)
        if(*s++ != *ptr--)
            return 0;
    return 1;
}


int main()
{
    char s[MAXLINE];
    gets(s);
    printf("%d", is_palindr(s));
}
