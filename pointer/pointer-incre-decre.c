#include <stdio.h>
int main()
{
    float a = 4.00;
    float *ptr = &a;
    ptr++;
    printf("%d", ptr);
}