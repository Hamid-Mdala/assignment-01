#include <stdio.h>

int adder(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int (*fptr) (int, int);
    fptr = adder;  // Assign the address of the adder function to the function pointer fptr

    printf("Using a name of function: %d\n", adder(10, 20));  // Output: Using a name of function: 30 (the result of adding 10 and 20 using the adder function)
    printf("Using a function pointer: %d\n", fptr(10, 20));   // Output: Using a function pointer: 30 (the result of adding 10 and 20 using the function pointer fptr, which points to the adder function)
    return 0;
}
