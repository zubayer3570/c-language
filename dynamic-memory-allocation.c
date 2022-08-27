#include <stdio.h>
#include <stdlib.h>
// 1. malloc - memory allocation
// 2. calloc - continuous memory allocation
// 3. free - making the dynamically allocated memory free, because it doesn't get
//           free automatically.
// 4. realloc - re-allocate (it is used to increase or decrease the size of
//              dynamically allocated memory)

int main()
{
    int *ptr;
    ptr = (int *)(malloc(5 * sizeof(int))); // this means allocate memory of 5 int size.
    // the first (int *) part specifies that the ptr is a integer pointer, without it
    // void ptr will be used by default.
    ptr = (int *)(calloc(5, sizeof(int))); // this means allocate 5 continuous memory
    // block of integer size. and allocated memory with calloc automatically initialize
    // with 0.
    ptr = (int*)(realloc(8, sizeof(int))); // we allocated 5 blocks of memory and 
    // created a pointer for that, now realloc means reallocate the allocted memory but
    // this time allocate 8 blocks of memory.

    // we can set value to the allocated memory blocks just like we do with arrays
    ptr[0] = 5;
    ptr[1] = 6;
    ptr[1] = 12;
    
    free(ptr); // this means free the allocated memory pointed by the pointer ptr.

    
}