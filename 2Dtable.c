#include <stdio.h>
void create_row(int arr[][10], int row_number, int column_number, int number);
int main()
{
    int table[2][10];
    create_row(table, 0, 10, 2);
    create_row(table, 1, 10, 3);
    for(int i = 0; i<10; i++){
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for(int i = 0; i<10; i++){
        printf("%d\t", table[1][i]);
    }
}

void create_row(int arr[][10], int row_number, int column_number, int number)
{
    for (int i = 0; i < column_number; i++)
    {
        arr[row_number][i] = number * (i + 1);
    }
}