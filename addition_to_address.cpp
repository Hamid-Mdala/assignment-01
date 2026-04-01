#include <stdio.h>
#include <string.h>
int main() {
    printf("Running file: addition to address.cpp\n");
    char c ='a';
    char *ptr = NULL;  //the pointer is initialized to NULL, which means it does not point to any valid memory location
    ptr = &c;  //the address of the variable c is assigned to the pointer

    printf("ptr1: 0x%0x\n", ptr-1);  // Output: ptr1: 0x7ffde5c8a9f6 (the actual address may vary, it is the address of c minus 1 byte)
    printf("ptr2: 0x%0x\n", ptr);    // Output
    printf("ptr3: 0x%0x\n", ptr+1);    // Output: ptr3: 0x7ffde5c8a9f8 (the actual address may vary, it is the address of c plus 1 byte)

    printf("size of data type: %d\n", sizeof(char));  // Output: size of data type: 1 (the size of the char data type is 1 byte)
    return 0;
}