#include <C:\Users\admin\Desktop\C_projects\static_variables_test\a.c>
#include <stdio.h>

void func()
{
     static int a = 5; // static-���������� ����������� ��������
     printf("%d\n", ++a);
}

int main()
{
   printf("%d\n\n", a); // a - ����������, ����������� � ������ �����

   func();
   func();
   func();
}
