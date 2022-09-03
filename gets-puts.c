#include <stdio.h>
int main()
{
    // the drawback of scanf is it can't take multiword input, for example,
    // if user inputs "Mahmudul Hasan Zubayer" it will only take Mahmudul as input,
    // and other words will be lost
    // For this case we use gets(which takes input) and puts(which prints the output)
    char name[100]; // this syntax means name is a variable of 100 character. 
    // but there is a problem with gets, it creats some vulnerability which can be the casue of
    // being hacked.
    // so instead of using gets we should use fgets
    fgets(name, 100, stdin);
    // with fgets we have to send the variable in which we want to store the input, and the size
    // of the variable.
    puts(name);
}