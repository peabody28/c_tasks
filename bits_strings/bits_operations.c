#include <stdio.h>

void print_bits(signed int a)
{
    int after_one = 0;
    for(int i =0; i<32; i++)
    {
         printf("%d", ((a & 2147483648) != 0)); // 32768 = 1000000000000000
         a <<= 1;
    }

    /*
    for(int i = 0; i<16; i++)
    {
        if(!((a & 32768) != 0) && after_one)//0
            printf("0");
        else if( ((a & 32768) != 0) )
        {
            if(!after_one)
                after_one = ~after_one;
            printf("1");
        }
        a <<= 1;
    }
    */

}

void bits(int a)
{
    //16 bit
    // -32767 to 32767
    int after_one = 0;
    printf("%d", !(a>0));


}

int main()
{
    signed int x;
    while(1)
    {
        scanf("%d", &x);
        print_bits(x);
        printf("\n");
    }

}
