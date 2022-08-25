#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("enter a number to get the factorial of that number: ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--){
        fact *= i;
    };
    printf("%d", fact);
}