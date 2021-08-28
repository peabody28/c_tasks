
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


void print_n(char s[])
{
    char new_line[MAXLINE];

    int s_i =0;
    int n_i =0;

    int num = 1;

    while( (new_line[n_i] = s[s_i]) != '\0')
    {
        if(num == MAXCHARS)
        {
            n_i++;
            new_line[n_i]='\n';
            num = 0;
        }
        n_i++;
        s_i++;
        num++;
    }
    new_line[n_i] = '\0';
    printf("\n%s\n", new_line);
}

int main()
{
    char line[MAXLINE];

    int len;
    while( (len = getline(line, MAXLINE)) > 0)
        print_n(line);

    return 0;

}
