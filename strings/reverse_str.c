#include <stdio.h>
#define MAXLINE 1000

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

void reverse_copy(char to[], char from[], int len)
{
    int i = 0;

    while( (to[i] = from[len-2-i]) != from[0])
        i++;
    to[i+1] = '\n';
    to[i+2] = '\0';
}

int main()
{
    char line[MAXLINE];
    char maxline[MAXLINE];

    int len;
    int max = 0;
    while( (len = getline(line, MAXLINE)) > 0)
    {
        if(len > max)
        {
            max = len;
            reverse_copy(maxline, line, max);
        }
    }
    if(max > 0)
        printf("%s", maxline);
    printf("%%");
    return 0;

}
