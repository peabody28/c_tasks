#include <stdio.h>
int main()
{
    int arr[5] = {-2, 14, 2, 5, -6};

    for(int i = 0; i<5;i++)
        for(int j = 1; j<5; j++)
        {
            if(arr[j] < arr[j-1])
            {
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }

    for(int i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

}
