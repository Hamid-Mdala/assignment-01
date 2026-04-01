#include <stdio.h>

int main() {
    int arr[3] = {7, 14, 21};  // Declare and initialize an array of integers with 3 elements
    printf("%d\n", arr[2]);  // Output: 21 (the value at index 2 of the array, which is the third element)
    printf("%d\n", *(arr+2)); // Output: 21 (the value at the address of arr plus 2 times the size of int, which is the same as arr[2])
    return 0;
}