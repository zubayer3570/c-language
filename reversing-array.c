#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int rev_arr[5];
    // for (int i = 0; i < 3; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[5 - 1 - i];
    //     arr[5 - 1 - i] = temp;
    // }
    for (int i = 0; i < 5; i++)
    {
        rev_arr[i] = arr[5 - 1 - i];
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n %d", arr[i]);
    // }
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d", rev_arr[i]);
    }
    // arr[0] = arr[n-1]
    // arr[1] = arr[n-2]
    // arr[x] = arr[n-x-1]
    int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = arr[n - i - 1];
    // }
    // printf("")
}