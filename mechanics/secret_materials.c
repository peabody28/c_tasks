#include <locale.h> // ��� ��������� �����������
#include <stdio.h>


int func1()
{
    int i = 2;
}

int func2(int x)
{
    int i = x + 3;
}
int func3()
{
    for(int i = 0; i<=1; i++);
}


int main()
{
    char *locale = setlocale(LC_ALL, "");
    printf("� ������ ��������� ���������� a,b,c, ���������� ������ 0, ������������� ��������\n������������ ��������� func1(), func2(), func3(), �� ������� �� ����� ���������� return\n\n");
    printf("��� ����� �������� ���������� ����� ��������� ���������� ��� ������\n\n");

    int a = 0;
    int b = 0;
    int c = 0;

    a = func1();
    printf("a = %d\n", a);

    b = func2(1);
    printf("b = %d\n", b);

    c = func3();
    printf("c = %d\n", c);

}
