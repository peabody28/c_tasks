#include <stdio.h>

int *sort(int *arr1, int arr1_len, int *arr2, int arr2_len, int arr[])
{
    // ������ int arr1[] � int *arr � ���������� ������� - ��� ���� � �� ��.
    // � ������ �� ���� ������� � ������� ���������� ��������� �� ������ ������� ������� (&arr[0]).

    // ��� ��� � ���������� � ���� ���������� ��������� arr1 � arr2 � ������ ��������� ���� ��� ��������� ���������� � ���� ���������� a1, a2
    int *a1 = arr1; // a1 ��������� �� ������ arr1
    int *a2 = arr2; // a2 ��������� �� ������ arr2

    // �������� �������, ������� ���������� � ��������� �� ������, ������� arr1 ������ ��������� �� ������
    // � ��� ������ ������ � ������ ������������ � �����, ������� ��������� ��������� �� ����� �������.
    // ������� ��� ����� ������ ���� ����� ������� (arr2_len), ������� � ������� � �������

    // � ���������� ����� ���������� �����.
    // ���� arr2 ���������� �������� �� ������� �������, �� ����� ���������: arr2 + 1 == arr2[1], arr2 + 2 == arr2[2] � ��.
    arr2 += arr2_len - 1; // �� ���� ������ arr2 ��������� �� ����� �������

    int i =0; // ������� ������� ��� ��������� (arr)

    /* ������� �������� ��������:

        ��� ��� �������������� ������( ����� �� ) ��� ����� ������������� �� ����������� ������� � ����� ��������� ���������
    - ��� ������ ������� ������� (arr1[0]) � ����� ������� (arr2[ar2_len -1])

        C�������� ��� ��������. ���� arr1[0] < arr2[2], �� � ����� � �� �������� arr1[0],
    � ��������� ��������� ����� ������� �� ���� �������, ���� ������ �� ������������ � �����.

    �� ����� ���������� ��� ������ ��� arr[0](��) = *arr1++. *arr1 ����� �������� arr1[0], a "++" ���������� � ��������� �������
    ��� ������������ �������:
    arr[0] = *arr1; // ������� �������
    arr1 += 1; // ��������� ���������
    �� ���� ��� �������� � ������������ ������� ������ � ��������� ���������(++).

    ���� �� arr1[0] > arr2[2], �� ����� ���: arr[0] = *arr2--.
    ��� ����� ��� ��, �� ��� ������ ������ ���������� � �����, ��������� ����� ��������� "--".

        � ����� ������ ��������� �������� ����� ���� �� �������� ��������� ���������� � ����� � ����� � �� ���������� �������� �� ������� �������.
    � ���� �������� �� ����� ������ ��� �������� 1 � 2.

        ���� �� ������ � ��������� ����������� �� ���� ����� �������, �� ��� �������� � else, �� �� ������ ������ ������:
    x = (���1) ? (���2) : (���3); - ��� �������� ������ if. ���� ���1 �����, �� x = ���2, ����� x = ���3.

    */
    while(1)
    {
        if(arr1 == a1 + arr1_len) //1
        {
            while(arr2 >= a2)
                arr[i++] = *arr2--;
            return arr;
        }
        else if(arr2 == a2-1) //2
        {
              while(arr1 <= a1 + arr1_len)
                    arr[i++] = *arr1++;
              return arr;
        }
        else
            arr[i++] = (*arr1 < *arr2) ? *arr1++ : *arr2--;

    }
}

int main()
{
    // � main ������ �����������, ������ ���� ��������, ����� ������� � ����� ����������.
    int arr1_len;
    scanf("%d", &arr1_len);
    int arr1[arr1_len];

    for(int i = 0; i< arr1_len; i++)
        scanf("%d", &arr1[i]);

    int arr2_len;
    scanf("%d", &arr2_len);
    int arr2[arr2_len];

    for(int i = 0; i< arr2_len; i++)
        scanf("%d", &arr2[i]);

    int arr[arr1_len+arr2_len]; // ������ ��� ����������

    sort(arr1, arr1_len, arr2, arr2_len, arr);

    for(int i = 0; i<arr1_len+arr2_len; i++)
        printf("%d ", arr[i]);

}
