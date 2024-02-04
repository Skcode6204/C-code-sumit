// enter the adress of 5 people (house no, block, city state)

#include<stdio.h>

typedef struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];

} add;

int main() {
    add s1;
    s1.houseNo = 5;
    s1.block = 4;
    strcpy(s1.city, "dhanbad");
    strcpy(s1.state, "jharkhand");

    printf("address information :\n");

    printf("houseNo :%d\n", s1.houseNo);
    printf("block :%d\n", s1.block);
    printf("city :%s\n", s1.city);
    printf("state :%s\n", s1.state);
    return 0;
}