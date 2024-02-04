//initializing of structure.

#include<stdio.h>

//user defined

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {2006167, 7.8, "sumit"};

    printf("student name :%s\n", s1.name);
    printf("student roll no :%d\n", s1.roll);
    printf("student cgpa :%f\n", s1.cgpa);
    return 0;
    
}
