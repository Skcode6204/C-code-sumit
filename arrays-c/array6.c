//comparison of 2 pointers
#include<stdio.h>

int main() {
    int sum;
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    sum = *ptr + *_ptr;
    printf("sum is %u", sum);
    return 0;


}