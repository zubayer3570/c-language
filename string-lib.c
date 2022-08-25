#include <stdio.h>
#include <string.h>
int main()
{
    char first[] = "applejh";
    char second[] = "applek";
    int res = strcmp(first, second);
    printf("%d", res);
}