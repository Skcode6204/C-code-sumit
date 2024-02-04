#include<stdio.h>

int main() {
    int marks[3];

    printf("enter the phy marks :");
    scanf("%d\n", &marks[0]);

     printf("enter the chem marks :");
    scanf("%d\n", &marks[1]);

     printf("enter the maths marks :");
    scanf("%d\n", &marks[2]);

    printf("phy = %d, chem = %d, maths = %d", marks[0], marks[1], marks[2]);
    return 0;
}
   
