#include <stdio.h>

/*
 ќбъединени€ позвол€ют хранить данные разных типов в одной €чейке пам€ти.
 ќбращение к каждой переменной в union указывает на одну и ту же €чейку пам€ти, но в зависимости от типа компил€тор обрабатывает ее по-разному
*/
union code
{
    int digit;
    char ch;
    float f;
};

int main()
{
    union code a;
    a.digit = 90;
    printf("%d - %c\n", a.digit, a.ch);
    a.ch = 89;
    printf("%d - %c", a.digit, a.ch);

}
