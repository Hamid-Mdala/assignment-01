#include <stdio.h>

void addNumber(int *ptr) {
    for (int i = 0; i < 10; i++) {
        ptr[i] += 100;  // Add 10 to each element of the array pointed to by ptr
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declare and initialize an array of integers with 10 elements
    printf(">> Before function call <<\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    addNumber(arr);
    printf(">> After function call <<\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}