#include <stdio.h>
#include <string.h>
#define MAXLINE 10

int to_int(char *str)
{
    int num = 0;
    int sign = 1;
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    char *c = str;
    while(*c != '\0')
        num = num*10 + (*c++ - '0');
    return sign*num;
}


int getline(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}


int main()
{
    char a[100][10];
    for(int i = 0; i < 100;i++)
    {
         a[i][0]='#';
         a[i][1]='\0';
    }

    int i = 0;

    for(;;)
    {
        char str[MAXLINE];
        getline(str, MAXLINE);
        if(str[0] == '\0')
            break;

        int num = to_int(str);

        char *head = a[0];

        int index = 0;

        for(int j = 1; j <= i && *head != '#'; j++)
        {
            if(num < to_int(head))
                index = j*2;
            else
                index = j*2 + 1;

            head = a[index];
        }
        strcpy(a[index], str);
        i++;
    }

    for(int i = 0; i < 30;i++)
        printf("%s ", a[i]);

}
