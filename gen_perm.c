// рекурсивный алгоритм порождения перестановок
#include <stdbool.h>
#define MAX 100 // максимальная длина перестановки

int n;
int i; // индекс свободной ячейки массива

int perm[MAX];
bool in_perm[MAX+1];

void push(int num)
{
    perm[i] = num;
    i++;
}

void pop()
{
    i--;
}

void search()
{
    if(i == n)
    {
        for(int i = 0; i<n; i++)
            printf("%d ", perm[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(in_perm[i])
            continue;
        in_perm[i] = 1;
        push(i);
        search();
        in_perm[i] = 0;
        pop();
    }
}

int main()
{
    for(int i = 0; i< MAX+1; i++)
        in_perm[i] = 0;
    scanf("%d", &n);
    search();
}
