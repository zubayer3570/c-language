#include <stdio.h>
int main(){
    // when we create a pointer we need to mention a specific data type.
    // that is the type of the variable whome address we are wanting to store.
    // but we also can store the address of a pointer variable.
    // this is called pointer to integer.
    int a = 12;
    int* p;
    p = &a;
    // now we want to store the address of the p, which is a pointer to integer, into another
    // pointer, but in this case what will be the data type?
    int** r;
    r = &p;
    // so the data type will be int*(pointer to integer), and an extra * for sating that it is
    // a pointer variable.
    // so now if we want to access the value of a, using pointer r, how can we do that?
    printf("the value of a = %d", **r);
}