#include <stdio.h>

int main() {
    char c='a';
    char *ptr=NULL;  //the pointer is initialized to NULL, which means it does not point to any valid memory location
    ptr=&c;  //the address of the variable c is assigned to the pointer ptr
    printf("Address of ptr: 0x%0x\n", ptr);  // Output: ptr: 0x7ffde5c8a9f7 (the actual address may vary)
    printf("Value at ptr: %c\n", *ptr);  // Output: Value at ptr: a (the value at the address pointed to by ptr is 'a')
    return 0;
}