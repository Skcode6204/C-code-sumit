// enter address details of 4 students

#include<stdio.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];

};

void printAdd(struct address add);

int main() {
    struct address adds[4];

    printf("enter the address of person 1 :");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter the address of person 2 :");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter the address of person 3 :");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("enter the address of person 1 :");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);

    return 0;
}

void printAdd(struct address add) {
    printf("address is : %d,%d,%s,%s\n", add.houseNo, add.block, add.city, add.state);
}