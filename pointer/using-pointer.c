#include <stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a = 5, b= 6;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("%d %d %d", sum, prod, avg);
}
void doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}