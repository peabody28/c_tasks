#include <stdio.h>


int the_big_name(int a, int b);

int main()
{
    int (*plus)(int a, int b); // ������� ��������� �� �������
    plus = the_big_name; // ������ �� ��������� �� ��� ������� the_big_name

    int a,b;
    printf("input numbers...\n");
    scanf("%d %d", &a,&b);

    printf("%d", plus(a, b)); // ��������� ��������� ��� ������� �������.
}

the_big_name(int a, int b)
{
    return a+b;
}
