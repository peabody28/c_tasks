#include <stdio.h>

/*
 ����������� ��������� ������� ������ ������ ����� � ����� ������ ������.
 ��������� � ������ ���������� � union ��������� �� ���� � �� �� ������ ������, �� � ����������� �� ���� ���������� ������������ �� ��-�������
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
