#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter a number");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int x = n; x > i; x--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x <= i; x++)
        {
            printf("*");
        }
        printf("\n");
    }
}