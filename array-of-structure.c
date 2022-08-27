#include <stdio.h>
int main (){
    //this is a structure
    struct student {
        char *name;
        int roll;
        float cgpa;
    };
    // and in this way we can create arrays of stucture.
    //here we created arrays of 100 structure, for 3 different Department.
    struct student CSE[100];
    struct student BBA[100];
    struct student PHA[100];
    // After that we can set value to the structure and also access them.
    CSE[0].roll = 12;
}