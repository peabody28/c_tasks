#include <stdio.h>

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int is_lower_char(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_upper_char(char c)
{
    return (c >= 'A' && c <= 'Z');
}


void expand(char s1[], char s2[])
{
    char c;
    char c_begin = -1;
    char c_end = -1;

    int i = 0;
    int j = 0;
    while (1)
    {
        c = s1[i];
        if(c == '-')
        {
            i++;
            continue;
        }

        if(c_begin == -1 && c != '\0')
            c_begin = c;
        else
        {

            if( (is_lower_char(c_begin) && is_lower_char(c))
                || (is_upper_char(c_begin) && is_upper_char(c))
                || (is_digit(c_begin) && is_digit(c)))
                    c_end = c;
            else
            {
                // обрабатываю очередное сокращение
                char m;
                for(m = c_begin; m <= c_end; m++)
                    s2[j++] = m;
                if( c == '\0')
                    break;
                c_begin = c;
                c_end = -1;
            }

        }
        i++;
    }
    s2[j] = '\0';
}

int main()
{
    char s1[50];
    scanf("%s", &s1);

    char s2[100];
    expand(s1, s2);
    printf("\n%s\n", s2);
}
