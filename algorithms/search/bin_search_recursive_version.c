#include <stdio.h>

int bin_search(int arr[], int begin, int end, int n)
{
    if(begin == end)
        return end;

    int mid = (begin+end)/2;
    if(n == arr[mid])
        return mid;
    else if(n > arr[mid])
        begin = mid+1;
    else
        end = mid-1;

    bin_search(arr, begin, end, n);
}

int main()
{
    int n;

    int nums[100];
    for(int i = 0; (nums[i]=i+1) != 100; i++);

    scanf("%d", &n);
    printf("%d", bin_search(nums, 0, 99, n));
}
