#include <stdio.h>
int main()
{
    // pointer is a variable that stores the address of other variable
    int num = 12;
    int *ptr;
    ptr = &num;
    printf("the address of the variable num is %d\n", ptr);

    // we can also access the value at the address stored in the pointer
    // with the help of value at address operator
    printf("the value at the adress %d is %d", ptr, *ptr);
    return 0;
}
