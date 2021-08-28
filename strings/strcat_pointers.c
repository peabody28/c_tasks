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
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

char *strcat_pointers(char *s, char *t)
{
    char *c = s;
    s = s + strlen(s) - 1;
    while( (*s++ = *t++) != '\n');
    *--s = '\0';
    return c;
}

int main()
{
    char s[MAXLINE];
    getline(s, MAXLINE);
    char t[MAXLINE];
    getline(t, MAXLINE);

    printf("\n\n%s", strcat_pointers(s, t));
}
