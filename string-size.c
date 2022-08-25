#include <stdio.h>

int print_size(char arr[]);

int main()
{
    char name[100];
    printf("Enter a name: ");
    fgets(name, 100, stdin);
    int size = print_size(name);
    printf("%d", size);
}

int print_size(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\n'; i++)
    {
        count++;
    }
    return count;
}