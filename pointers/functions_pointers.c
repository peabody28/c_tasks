#include <stdio.h>


int the_big_name(int a, int b);

int main()
{
    int (*plus)(int a, int b); // объ€вил указатель на функцию
    plus = the_big_name; // теперь он указывает на код функции the_big_name

    int a,b;
    printf("input numbers...\n");
    scanf("%d %d", &a,&b);

    printf("%d", plus(a, b)); // использую указатель как обычную функцию.
}

the_big_name(int a, int b)
{
    return a+b;
}
