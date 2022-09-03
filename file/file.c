#include <stdio.h>
int main (){
    // here w, stands for write, and if any file isn't present of the given name,
    // it automaitcally creates a file. 
    FILE *new_file = fopen("test.txt", "w");
    fclose(new_file); // to close a file
}