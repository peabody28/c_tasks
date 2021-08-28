#include <stdio.h>

double fact(double n)
{
    return n ? n * fact(n-1):1;
}

int main()
{

    double n;
    scanf("%lf", &n);
    printf("%lf", fact(n));
}
