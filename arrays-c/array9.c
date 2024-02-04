// multidimentional array

#include<stdio.h>

int main() {
    int marks[2][3];  //{---/---}
    marks[0][0] = 99;
    marks[0][1] = 89;
    marks[0][2] = 79;

    marks[1][0] = 90;
    marks[1][1] = 80;
    marks[1][2] = 70;
    printf("%d", marks[1][2]);
    return 0;
}