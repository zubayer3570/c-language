#include <stdio.h>
int main()
{
    // string with pointer
    // String declared with array notaion (int arr[100] = "zubayer") can't be modified
    // To modifiy'update these, we need to use <string.h> header
    // then use a funciton called strcpy(update this, copy this)
    // but declaring a string with pointer solves the problem without any hassle,
    // you can easily update the value like this...
    char *str = "zubayer";
    str = "hello";
    printf("%s", str);
}