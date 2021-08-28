#include <C:\Users\admin\Desktop\C_projects\static_variables_test\a.c>
#include <stdio.h>

void func()
{
     static int a = 5; // static-переменна€ объ€вл€етс€ единожды
     printf("%d\n", ++a);
}

int main()
{
   printf("%d\n\n", a); // a - переменна€, объ€вленна€ в другом файле

   func();
   func();
   func();
}
