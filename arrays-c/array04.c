//write a program to enter price of 3 items & print their final cost with gst.

#include<stdio.h>
int main() {
float  totalPrice1;
float price[] = {100.0, 200.0, 300.0};
printf("enter the 3 prices : ");
scanf("%f", &price[0]);
scanf("%f", &price[1]);
scanf("%f", &price[2]);
totalPrice1 = price[0]+(0.18*price[0]);
printf("total price 1 is %f", totalPrice1);

float totalPrice2 = price[1]+(0.18*price[1]);
printf("total price 2 is %f", totalPrice2);

float totalPrice3 = price[2]+(0.18*price[2]);
printf("total price 3 is %f", totalPrice3);
return 0;

}