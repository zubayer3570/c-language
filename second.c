#include <stdio.h>
int main()
{
    int temp;
    int bi_num;
    scanf("%d", &temp);
    // check if the number is less than 2
    // 20 % 2 = 0 --- add 0 in the binary number --- 20/2 = 10 --- store updated number
    // 10 % 2 = 0 --- add 0 in the binary number --- 10/2 = 5 --- store updated number
    // 5 % 2 = 1 --- add 1 in the binary number --- 5/2 = 2 --- store updated number
    // 2 % 2 = 0 --- add 0 in the binary number --- 2/2 = 1 --- store updated number
    // 1 % 2 = 1 --- add 1 in the binary number
    // if the number is less than 2, then add 1 in the binary, and break the operation
    while (temp >= 1)
    {
        if (temp % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        temp /= 2;
    }
    return 0;
}