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
    // тут нужна проверка
    struct book b_info = library[index];
    printf("-------------------------------------------------------------------------------");
    printf("\nКнига №%d\nАвтор книги - %s\nКоличество страниц - %d\nЦена - %f", index+1, b_info.author_name, b_info.str_count, b_info.price);
    printf("\n-------------------------------------------------------------------------------\n\n");

}

void add_book_to_library()
{
    struct book a;
    char trash[1];

    char name[40];
    printf("Введите имя автора:");
    gets(name);
    strcpy(a.author_name, name);

    printf("Введите количество страниц в книге: ");
    scanf("%d", &a.str_count);
    gets(trash);
    printf("Введите цену книги:");
    scanf("%f", &a.price);
    gets(trash);
    library[count] = a;
    count++;
}

int main(void)
{
    // для использования русского языка
    char *locale = setlocale(LC_ALL, "");
    while(1)
    {
        char code;
        printf("Введите код \n(1 - добавить книгу)\n(2 - получить инфу о книге)\n(3 - все книги)\n");
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
            printf("\n\nО какой книге хотите получить информацию?\n");
            scanf("%d", &num);
            // забираю /n из буфера
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
