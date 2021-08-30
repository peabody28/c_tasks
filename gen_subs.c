// ����������� �������� ���������� �����������
#define MAX 10 // ������������ ����� ������������

int n;
int i; // ������ ��������� ������ �������

int sub[MAX];

void push(int num)
{
    sub[i] = num;
    i++;
}

void pop()
{
    i--;
}

void f(int k)
{
    if(k==n+1)
    {
        if(i==0) // ������ ���������
        {
            printf("0\n");
            return;
        }
        for(int l = 0; l<i;l++)
            printf("%d ", sub[l]);
        printf("\n");
        return;
    }
    push(k);
    f(k+1);
    pop();
    f(k+1);
}

int main()
{
    scanf("%d", &n);
    f(1);
}
