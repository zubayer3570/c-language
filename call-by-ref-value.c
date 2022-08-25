#include <stdio.h>
void callByValue(int n);
void callByReference(int *n);
int main()
{
    int number = 5;
    int number1 = 7;
    int *addressOfNumber1 = &number1;
    callByValue(number);
    callByReference(addressOfNumber1);
    printf("%d\n", number);
    printf("%d\n", number1);
}

void callByValue(int n) // call by value, doesn't change the value of the source
{
    n = n * n;
    printf("%d\n", n);
}

void callByReference(int *n)
{
    *n *= *n;
}