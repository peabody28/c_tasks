#include <stdio.h>
#define MAXLEN 1000


void to_lower(char *in)
{
    while(*in != '\0')
    {
        if(*in == '\n' || *in == '\t' || *in == ' ' || (*in >= 'a' && *in <= 'z') || (*in >= '0' && *in <= '9'))
            putchar(*in++);
        else
            putchar('a' + *in++ - 'A');
    }
}


void to_upper(char *in)
{
    printf("here");
    while(*in != '\0')
    {
        if(*in == '\n' || *in == '\t' || *in == ' ' || (*in >= 'A' && *in <= 'Z') || (*in >= '0' && *in <= '9'))
            putchar(*in++);
        else
            putchar('A' + *in++ - 'a');
    }
}

int strcmp(char *s1, char *s2)
{
    while(*s1 == *s2 && *s1++ != '\0' && *s2++ != '\0')
        ;
    return s1;
}

int main(int argc, char *argv[])
{
    char s[MAXLEN];

    char c;
    int i = 0;
    while ( (c = getchar()) != EOF && (i != MAXLEN-1) )
        s[i++] = c;

    //printf("%d", i);

    s[i] = '\0';

    // printf("%s", s);

    // printf("%d", argc);

    if(argc >= 2)
    {
        //printf("%d", strcmp(argv[1], "to_upper" ));
        if( strcmp(argv[1], "to_upper" ))
            to_upper(s);
        else
            to_lower(s);
    }
    else
        to_lower(s);
}
