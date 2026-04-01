#include <stdio.h>

int main() {
    int arr[3] = {7, 14, 21};  // Declare and initialize an array of integers with 3 elements

    int *ptr = arr;  // The name of the array (arr) can be used as a pointer to the first element of the array
    printf("%d\n", ptr[1]);  // Output: 14 (the value at index 1 of the array, which is the second element)
    printf("%d\n", *(ptr+1)); // Output: 14 (the value at the address of ptr plus 1 times the size of int, which is the same as ptr[1])
    return 0;
}