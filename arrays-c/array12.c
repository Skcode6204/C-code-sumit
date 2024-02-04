#include<stdio.h>

int countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+5));

    return 0;
}
//here we see that in terminal 3 is printed, this is because the 3 is given in the array