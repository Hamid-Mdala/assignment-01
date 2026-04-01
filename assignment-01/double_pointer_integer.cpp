#include <stdio.h>

int main() {
    int num = 7;
    int *ptr = NULL;  //the pointer is initialized to NULL, which means it does not point to any valid memory location
    int **dptr = NULL;  //the pointer is initialized to NULL, which means
    ptr = &num;  //the address of the variable num is assigned to the pointer ptr
    dptr = &ptr;  //the address of the pointer ptr is assigned to the pointer dptr
    printf("dptr-1: 0x%0x\n", dptr-1);  // Output: dptr-1: 0x7ffde5c8a9f6 (the actual address may vary, it is the address of ptr minus 4 bytes)
    printf("dptr: 0x%0x\n", dptr);    // Output: dptr: 0x7ffde5c8a9f7 (the actual address may vary)
    printf("dptr+1: 0x%0x\n", dptr+1);    // Output: dptr+1: 0x7ffde5c8a9f8 (the actual address may vary, it is the address of ptr plus 4 bytes)
    printf("size of data type: %d\n", sizeof(ptr));  // Output size of data type: 4 (the size of the pointer data type is 4 bytes)
    return 0;
}