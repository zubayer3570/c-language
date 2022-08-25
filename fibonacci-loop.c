#include <stdio.h>
int main()
{
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    int arr[user_input];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < user_input; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i < user_input; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}