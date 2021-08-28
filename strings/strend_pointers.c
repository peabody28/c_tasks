#include <stdio.h>
#include <string.h>
#define MAXLINE 100

int getline(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n')
    {
        //s[i] = c;
        //i++;
    }
    s[i] = '\0';
    return i;
}

int strend_pointers(char *s, char *t)
{
    s = s + strlen(s) - strlen(t);
    while( *t != '\0' && (*s++ == *t++));
    return *t == '\0';
}

int main()
{
    char s[MAXLINE];
    getline(s, MAXLINE);
    char t[MAXLINE];
    getline(t, MAXLINE);

    printf("\n%d", strend_pointers(s, t));
}

