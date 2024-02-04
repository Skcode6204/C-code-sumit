// create a program to store complex number by using arrow operator

#include<stdio.h>

struct complex {
    int img;
    int real;

};

void addComplex(struct complex number1, struct complex number2, struct complex sum);

int main() {
    struct complex number1 = {4, 3};
    struct complex number2 = {5, 8};
    struct complex sum = {0};

    struct complex *ptr = &number1;
    struct complex *ptr = &number2;
    printf("img part = %d\n", ptr->img);
    printf("real part :%d\n", ptr->real);

    addcomplex(number1, number2, sum);
    return 0;
}
void addComplex(struct complex number1, struct complex number2, struct complex sum) {
    sum.1 = number1.img + number2.img;
    sum.2 = number1.real + number2.real;

    printf("sum of 1 :%d\n", sum.1);
    printf("sum of 2 :%d\n", sum.2);
}
