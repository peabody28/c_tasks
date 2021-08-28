#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    int nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;

}

