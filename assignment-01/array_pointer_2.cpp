#include <stdio.h>

int main() {
    char temp[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of characters with 5 elements
    char *ptr = temp+4;

    printf("%d\n", ptr[-2]);  // Output: 3 (the value at the address of ptr minus 2 times the size of char, which is the same as temp[2])
    return 0;
}