#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    ptr++;
    // increasing a pointer's value by 1 does not actually increase the value by 1, it increases
    // by the size of the pointer data type. such as ptr is a integer pointer, ptr++ increases
    // the address stored in the pointer by 4
    // so if ptr = 100, doing ptr++, will result in ptr = 104
    printf("%d", ptr);
}