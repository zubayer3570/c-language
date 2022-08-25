#include <stdio.h>
int fibo(int x);
int main()
{
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    // for (int i = 0; i < user_input; i++)
    // {
    //     printf("%d\n", fibo(i));
    // }
    fibo(user_input);
    return 0;
}
int fibo(int x)
{
    if (x == 1)
    {
        return 1;
    }
    if (x <= 0)
    {
        return 0;
    }
    int sum = fibo(x - 1) + fibo(x - 2);
    printf("%dth fibonacci number is = %d\n",x, sum);
    return sum;
}