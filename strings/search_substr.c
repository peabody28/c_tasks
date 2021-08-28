#include <stdio.h>

int search_substr(char s[], char sub_s[])
{
    int ind = -1;
    for(int i = 0; s[i] != '\0'; i++)
    {
        int k;
        int j;

        for(j = i, k = 0; sub_s[k] != '\0' && sub_s[k] == s[j]; j++, k++);

        if(k > 0 && sub_s[k] == '\0')
           return i;
    }
    return -1;
}

int main(void)
{
    char s[] = "abracadabra";
    char sub_s[] = "bra";
    printf("%d", search_substr(s, sub_s));
}
