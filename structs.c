#include <math.h>
#include <string.h>
#include <stdio.h>
#define MAXNAME 20
#define MAXOLDNAME 30
#define MAXPOST 30
#define STAFF 30

void employee_info(int id);

struct Address
{
    char *city;
    char *street;
    short house;
};

struct Person
{
    char name[MAXNAME];
    char oldname[MAXOLDNAME];
    int age;
    int phone_number;
    char post[MAXPOST];
};

struct Bank
{
    struct Address addr;
    int phone_number;
    struct Person owner;
    struct Person staff[STAFF];
};

struct Bank bank;

int main()
{
    struct Address bank_address;
    bank_address.city = "Mogilev";
    bank_address.street = "Leninskaya";
    bank_address.house = 85;

    struct Person bank_owner;

    strcpy(bank_owner.name, "Gerard");
    strcpy(bank_owner.oldname, "Depardie");
    bank_owner.age = 56;
    bank_owner.phone_number = 7456789;
    strcpy(bank_owner.post, "Director");

    bank.owner = bank_owner;
    bank.addr = bank_address;
    bank.phone_number = 1234567;

    int i = 0;
    while(1)
    {
        char command[100];
        scanf("%s", command);

        if(!strcmp(command, "stop"))
            break;
        else if(!strcmp(command, "info"))
        {
            int a = i-1;
            while(a >= 0)
                employee_info(a--);
            continue;
        }

        struct Person tmp;

        char name[MAXNAME];
        char oldname[MAXOLDNAME];
        char post[MAXPOST];

        printf("%d employee name : ", i+1);
        scanf("%s", name);
        strcpy(tmp.name, name);

        printf("%d employee oldname: ", i+1);
        scanf("%s", oldname);
        strcpy(tmp.oldname, oldname);

        printf("%d employee post: ", i+1);
        scanf("%s", post);
        strcpy(tmp.post, post);

        printf("%d employee age: ", i+1);
        scanf("%d", &tmp.age);

        printf("%d employee phone_number: ", i+1);
        scanf("%d", &tmp.phone_number);

        bank.staff[i] = tmp;
        i++;
    }
}

void employee_info(int id)
{
    struct Person emp = bank.staff[id];
    if(strlen(emp.name))
    {
        printf("\n\n-----------------------\n");
        printf("-------PERSON-%d--------\n", id+1);
        printf("name: %s\n", emp.name);
        printf("oldname: %s\n", emp.oldname);
        printf("age: %d\n", emp.age);
        printf("phone: %d\n", emp.phone_number);
        printf("\n-----------------------\n");
    }
}
