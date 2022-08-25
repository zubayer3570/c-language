#include <stdio.h>
int main()
{
    char name[] = "ZUBAYER";
    // printing string by for loop
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    // %s is the format specifier for the string
    printf("\n%s", name);
    return 0;
}