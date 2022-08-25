#include <stdio.h>
void swapping(int a, int b);
void swappingByAddress(int *a, int *b);
int main()
{
    int a = 5;
    int b = 6;
    printf("%d %d\n", a, b);
    int *addressOfa = &a;
    int *addressOfb = &b;
    swappingByAddress(addressOfa, addressOfb);
    printf("%d %d\n", a, b);
}

// void swapping(int a, int b) // call by value
// {
//     printf("%d %d\n", a, b);
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     printf("%d %d\n", a, b);
// }

void swappingByAddress(int *addressOfa, int *addressOfb)
{
    int c;
    c = *addressOfa;
    *addressOfa = *addressOfb;
    *addressOfb = c;
}