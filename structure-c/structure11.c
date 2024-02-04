// write a program to add two vector

#include<stdio.h>

struct vector {
    int x;
    int y;
};

calcSum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    struct vector v1 = {4, 8};
    struct vector v2 = {5, 12};
    struct vector sum = {0};

    calcSum(v1, v2, sum);
    return 0;
}

calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x :%d\n", sum.x);
    printf("sum of y :%d\n", sum.y);
}

