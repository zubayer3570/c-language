#include <stdio.h>

int rec(int number);

int main()
{
    int result = rec(4);
    printf("%d", result);
}

int rec(int number)
{
    if (number == 1)
    {
        return 1;
    }
    return rec(number - 1) * number;
}