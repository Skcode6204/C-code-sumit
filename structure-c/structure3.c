// array of structure.

#include<stdio.h>

//user defined

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[100];
    ece[0].roll = 2006167;
    ece[0].cgpa = 7.8;
    strcpy(ece[0].name, "sumit");

    printf("student name :%s\n", ece[0].name);
    //printf("student roll no :%d\n", ece[0].roll);
    //print("student cgpa :%f\n", ece[0].cgpa);
    return 0;
}
