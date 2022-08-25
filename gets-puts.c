#include <stdio.h>
int main()
{
    // the drawback of scanf is it can't take multiword input, for example,
    // if user inputs "Mahmudul Hasan Zubayer" it will only take Mahmudul as input,
    // and other words will be lost
    // For this case we use gets (which takes input) and puts(which prints the output)
    char name[100];
    // gets(name);
    // but gets is vulnerable
    // so instead of using gets we should use fgets
    fgets(name, 100, stdin);
    puts(name);
}