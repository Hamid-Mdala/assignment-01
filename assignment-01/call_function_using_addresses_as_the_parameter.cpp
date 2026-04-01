#include <stdio.h>

void swap(int* num1, int* num2) {
    int temp = *num1;  // Store the value at num1 in a temporary variable
    *num1 = *num2;     // Assign the value at num2 to num
    *num2 = temp;     // Assign the value stored in temp to num2
}
int main() {
    int num1 = 10;
    int num2 = 50;
    printf("<< Before function call <<\n");
    printf("num1: %d\n", num1);  // Output: num1: 10
    printf("num2: %d\n", num2);  // Output: num2: 50

    swap(&num1, &num2);  // Call the swap function with the addresses of num1 and num2
    //swap(num1, num2);  // Call the swap function with the values of num1 and num2 (this will not swap the values in the main function) because its going to assign new values to the parameters in the swap function but it will not change the values of num1 and num2 in the main function

    printf("<< After function call <<\n");
    printf("num1: %d\n", num1); // Output: num1: 50 (the value of num1 is now 50 after the swap)
    printf("num2: %d\n", num2); // Output: num2: 10 (the value of num2 is now 10 after the swap)
    return 0;
}