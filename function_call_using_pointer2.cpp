#include <stdio.h>

int adder(int n1, int n2) {
    printf("Adder was called\n");
    return n1 + n2;
}

int divider(int n1, int n2) {
    printf("Divider was called\n");
    return n1 / n2;
}

void printResult(int n1, int n2, int (*fptr) (int n1, int n2)) {
    printf("%d\n", fptr(n1, n2));  // Call the function pointed to by fptr with n1 and n2 as arguments and print the result
}

int main() {
    int num1 = 10;
    int num2 = 5;
    printResult(num1, num2, adder);
    printResult(num1, num2, divider);
    printf("\n");
    return 0;
}