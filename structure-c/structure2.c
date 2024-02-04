//write a program to print details of three student.

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

    struct student s2;
    s2.roll = 2006168;
    s2.cgpa = 7.2;
    strcpy(s2.name, "faagu");

    printf("student name :%s\n", s2.name);
    printf("student roll no :%d\n", s2.roll);
    printf("student cgpa :%f\n", s2.cgpa);
    
    struct student s3;
    s3.roll = 2006169;
    s3.cgpa = 7.3;
    strcpy(s3.name, "dev");

    printf("student name :%s\n", s3.name);
    printf("student roll no :%d\n", s3.roll);
    printf("student cgpa :%f\n", s3.cgpa);
    return 0;
}
