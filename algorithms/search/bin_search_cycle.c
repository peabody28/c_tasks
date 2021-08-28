
int main()
{
    int x = 78; // искомое число
    int index = -1; // индекс искомого числа

    int begin;
    int end;
    int nums[100]; // массив [1,2,3,4.....,100]

    for(int i = 0; (nums[i]=i+1) != 100; i++);

    begin = 0;
    end = 99;



    while(begin != end)
    {
        int mid_ind = (begin+end)/2;
        if(x == nums[mid_ind])
        {
            index = mid_ind;
            break;
        }
        else if(x < nums[mid_ind])
            end = mid_ind-1;
        else
            begin = mid_ind+1;
    }

    printf("%d", index);

}
