#include <stdio.h>
#define MAXLINE 1000
#define MAXCHARS 15

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


int print_n(char s[])
{
    if(s[0]=='\0')
        return 0;
    char new_line[MAXLINE];
    int i = 0;
    int j = 0;
    while(s[i] != '\0')
    {
        if(i >= MAXCHARS)
        {
           new_line[j] = s[i];
           j++;
        }
        else
            printf("%c", s[i]);
        i++;
    }
    new_line[j] = '\0';
    printf("\n");
    print_n(new_line);
    return 0;

}

int main()
{
    char line[MAXLINE];

    int len;
    while( (len = getline(line, MAXLINE)) > 0)
    {
        printf("\n");
        print_n(line);
    }
    return 0;

}

