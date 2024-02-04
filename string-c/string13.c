#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main() {
   char password[100];
   scanf("%s", password);
   salting(password);
}

void salting(char password[]) {
    char salt[] = "@123";
    char newPass[100];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}

int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}