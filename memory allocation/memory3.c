// wap to allocate 5 prices.  //wap=write a program,

#include<stdio.h>
#include<stdlib.h>

int main() {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 25.45;
    ptr[1] = 56.8;
    ptr[2] = 76;
    ptr[3] = 245;
    ptr[4] = 92.67;

    for(int i=0; i<5; i++) {
        printf("%f\n", ptr[i]);

    }
    return 0;
}