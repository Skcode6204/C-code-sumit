// 2 numbers a & b are in the file. WAP to replace them with trheir sum

#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test5.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("Test5.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}