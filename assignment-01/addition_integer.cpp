#include <stdio.h>

int main() {
    printf("Running file: addition integer.cpp\n");
    int num = 7;
    int *ptr = NULL;
    ptr = &num;  //the address of the variable num is assigned to the pointer ptr

    printf("ptr1: 0x%0x\n", ptr-1);  // Output: ptr1: 0x7ffde5c8a9f6 (the actual address may vary, it is the address of num minus 4 bytes)
    printf("ptr2: 0x%0x\n", ptr);    // Output
    printf("ptr3: 0x%0x\n", ptr+1);    // Output: ptr3: 0x7ffde5c8a9f8 (the actual address may vary, it is the address of num plus 4 bytes)
    printf("size of data type: %d\n", sizeof(int));  // Output: size of data type: 4 (the size of the int data type is 4 bytes)
    return 0;
}