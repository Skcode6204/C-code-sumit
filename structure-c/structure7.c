#include<stdio.h>

//user defined

struct student 
{
    int roll;
    float cgpa;
    char name[100];
}; 

void printInfo(struct student s1);

int main() {
    struct student s1 = {2006167, 7.8, "sumit"};
    printInfo(s1);
   // printf("student name = %s\n", s1.name);
    //printf("student roll = %d\n", s1.roll);
    //printf("student cgpa = %f\n", s1.cgpa);

   // struct student *ptr = &s1;
    //printf("student name = %d\n", ptr->name);
    //printf("student roll = %d\n", ptr->roll);
    //printf("student cgpa = %d\n", ptr->cgpa);
    return 0;
}

void printInfo(struct student s1) {
    printf("student information :\n");
    
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

}
