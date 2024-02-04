#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char name1[] = "sumit";
    char name2[] = "kumar";
    strcat(name1, name2);
    puts(name1);
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