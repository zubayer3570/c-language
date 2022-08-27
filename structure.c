#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char *name;
        int roll;
        float cgpa;
    };
    struct student s1;
    s1.name = "Zubayer";
    s1.roll = 1501;
    s1.cgpa = 3.78;
    printf("Student Name %s \n", s1.name);
    printf("Student Roll %d \n", s1.roll);
    printf("Studnet CGPA %f \n", s1.cgpa);
}