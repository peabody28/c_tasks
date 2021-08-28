#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int count = 0;

struct book {
    int str_count;
    char author_name[40];
    float price;
};

struct book library[250];


void get_book_info(int index)
{
    // ��� ����� ��������
    struct book b_info = library[index];
    printf("-------------------------------------------------------------------------------");
    printf("\n����� �%d\n����� ����� - %s\n���������� ������� - %d\n���� - %f", index+1, b_info.author_name, b_info.str_count, b_info.price);
    printf("\n-------------------------------------------------------------------------------\n\n");

}

void add_book_to_library()
{
    struct book a;
    char trash[1];

    char name[40];
    printf("������� ��� ������:");
    gets(name);
    strcpy(a.author_name, name);

    printf("������� ���������� ������� � �����: ");
    scanf("%d", &a.str_count);
    gets(trash);
    printf("������� ���� �����:");
    scanf("%f", &a.price);
    gets(trash);
    library[count] = a;
    count++;
}

int main(void)
{
    // ��� ������������� �������� �����
    char *locale = setlocale(LC_ALL, "");
    while(1)
    {
        char code;
        printf("������� ��� \n(1 - �������� �����)\n(2 - �������� ���� � �����)\n(3 - ��� �����)\n");
        code = getche();


        if(code == '1')
        {
            system("@cls||clear");
            add_book_to_library();
            system("@cls||clear");
        }

        else if(code == '2')
        {
            system("@cls||clear");
            int num;
            printf("\n\n� ����� ����� ������ �������� ����������?\n");
            scanf("%d", &num);
            // ������� /n �� ������
            char trash[1];
            gets(trash);
            num--;
            system("@cls||clear");
            get_book_info(num);
        }
        else if(code == '3')
        {
            system("@cls||clear");
            for(int num = 0; num<count; num++)
                get_book_info(num);
        }

    }

    return 0;
}
