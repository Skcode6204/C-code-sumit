//typdef keyword.

#include<stdio.h>

typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu ;

typedef struct electronicscommunicationstudent 
{
    int roll;
    float cgpa;
    char name[100];
} ece;

int main() {
    ece s1;
    s1.roll = 2006167;
    s1.cgpa = 7.9;
    strcpy(s1.name, "sumit");

    printf("student information :\n");
    printf("student name :%s\n", s1.name);
    printf("student roll :%d\n", s1.roll);
    printf("student cgpa :%f\n", s1.cgpa);

    return 0;
}