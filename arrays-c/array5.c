//pointer array
#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    printf("value is %u\n", ptr);
    ptr++;
    printf("value is %u\n", ptr);
    ptr--;
    printf("value is %u\n", ptr);
    return 0;


}