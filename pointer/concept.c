#include <stdio.h>
int main()
{
    // the reason a pointer needs to have a data type is that, with pointers we don't only
    // store the address of variables, we can also dereference a pointer, which means we
    // can access and modify the value at the address.
    // in that case if we don't specify the data type and as different data type occupy
    // different amount of contiguous memory block, when dereferncing the pointer, compiler
    // won't know how many blocks it should read, here is an example...
    int a = 1350;
    char *ptr;
    ptr = &a; // as a is a integer, storing its address into a character pointer gives
    // wrong output
    printf("the value at a = %d", *ptr);
    // this happens because integer a takes 4 bytes of in the memory, so when dereferencing
    // to it with a character pointer, compiler only reads 1 byte of the memory, because
    // character data type takes 1 byte of memory. this results in wrong output.
    return 0;
}