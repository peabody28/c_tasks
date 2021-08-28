#include <string.h>
#include <stdio.h>



int reverse(char str[])
{
    if(strlen(str) == 1)
        return;

    int val = str[0];

    int i,j;
    for(i = 0, j = 1; str[j] != '\0'; i++, j++)
        str[i] = str[j];
    str[i] = '\0';

    reverse(str);
    str[strlen(str)] = val;
}

int main()
{
    char str[1000];
    scanf("%s", &str);

    reverse(str);
    printf("%s", str);
}
