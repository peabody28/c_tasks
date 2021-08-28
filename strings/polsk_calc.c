#include <stdio.h>
#define MAXVAL 100

float stack[MAXVAL];
int index = 0;

int is_operator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%');
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

float str_to_int(char c[])
{
    int n = 0;
    for(int i = 0; is_digit(c[i]); i++)
        n = n*10 + (c[i] - '0');
    return n;
}

void push(float val)
{
   // printf("stack[%d] = %f\n", index, val);
    if(index < MAXVAL)
        stack[index++] = val;
}

float pop()
{
    if(index > 0)
        return stack[--index];
}


int main()
{
    char str[10];
    int i = 0;

    char c;

    while (c != EOF)
    {
        c = getchar();

        if(is_digit(c))
            str[i++] = c;
        else if(c == ' ')
        {
            if(i == 0)
                continue;
            str[i] = '\0';
            push(str_to_int(str));
            i = 0;
        }
        else if(is_operator(c))
        {

            switch(c)
            {
                case '+':
                {
                    float top = pop();
                    push(pop() + top);
                    break;
                }
                case '-':
                {
                    float top = pop();
                    push(pop() - top);
                    break;
                }
                case '*':
                {
                    float top = pop();
                    push(pop() * top);
                    break;
                }
                case '/':
                {
                    float top = pop();
                    push( pop() / top);
                    break;
                }
                case '^':
                {
                    int top = (int)pop();
                    float top2 = pop();
                    float num = 1;
                    for(int i = top; top > 0; top--)
                        num *= top2;
                    push(num);
                    break;
                }
                case '%':
                {
                    int top = pop();
                    push( (int)pop() % top);
                    break;
                }

            }

        }
        else if(c == '\n')
        {
            printf("%f\n\n", pop());
            index = 0;
        }
    }

}
