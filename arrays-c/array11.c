#include<stdio.h>

int countMultiple3(int arr[], int n);

int main() {
    int arr[] = {3, 5, 6, 8, 9, 18, 21};
    printf("%d", countMultiple3(arr, 7));
    return 0;
}

int countMultiple3(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}
       