#include <stdio.h>

int rec(int number);

int main()
{
    int result = rec(4);
    printf("%d", result);
}
// a function which calls itself in its body, is a recursive function
// recursive function must have a terminating condition, which stops the recursion.
int rec(int number)
{
    if (number == 1)
    {
        return 1;
    }
    return rec(number - 1) * number;
}