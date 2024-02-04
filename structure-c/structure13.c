//print account details

#include<stdio.h>

typedef struct bankAccount {
    int accountNo;
    char name[100];
} acc;

int main() {
    acc acc1 = {5651, "sumit"};
    acc acc2 = {5652, "amit"};
    acc acc3 = {5653, "sujit"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("acc name = %s\n", acc1.name);

    printf("acc no = %d\n", acc2.accountNo);
    printf("acc name = %s\n", acc2.name);

    printf("acc no = %d\n", acc3.accountNo);
    printf("acc name = %s\n", acc3.name);

    return 0;

}