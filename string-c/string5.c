#include<stdio.h>

void printString(char arr[]);

int main() {
    char str[100];
    fgets(str, 100, stdin);  //use of gets() in place of printf() in strings.
    puts(str);               //use of puts() in place of scanf() in strings.
    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0', i++;) {
        printf("%c", arr[i]);
    }
    printf("\n");
}