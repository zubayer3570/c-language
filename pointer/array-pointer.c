#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d \n%d", arr, &arr[0]);
    //so the name of the array refers to the array's first value's address. 
}