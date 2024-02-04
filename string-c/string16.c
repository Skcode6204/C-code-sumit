//write a program to check the character present or not 

#include<stdio.h>
#include<string.h>

int countVowels(char str[]);
void checkChar(char str[], char ch);

int main() {
    char str[] = "sumitkumar";
    char ch = 'i';
    checkChar(str, ch);


}

void checkChar(char str[], char ch) {
    for(int i=0; str[i] = '\0'; i++) {
        if(str[i] == ch) {
        printf("character is present :");
        return;
        }
    }
    printf("character is not present :");
}
