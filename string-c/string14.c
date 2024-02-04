#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void slice(char str[], int n, int m);

int main() {
    char str[] = "sumitkumar";
    slice(str, 3, 6);
   
}

void slice(char str[], int n, int m) {
    char newStr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
        
    }
    newStr[j] = '\0';
    puts(newStr);
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