//structures

#include<stdio.h>

//user defined

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll = 2006167;
    s1.cgpa = 7.8;
    strcpy(s1.name, "sumit");

    printf("student name :%s\n", s1.name);
    printf("student roll no :%d\n", s1.roll);
    printf("student cgpa :%f\n", s1.cgpa);
    return 0;
    
}
