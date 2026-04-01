#include <stdio.h>

int main() {
    char c = 'a';
    char *ptr = NULL;  //the pointer is initialized to NULL, which means it
    char **dptr = NULL;  // pointer-to-pointer: will hold the address of ptr

    ptr = &c;  //the address of the variable c is assigned to the pointer ptr
    dptr = &ptr;  //the address of the pointer ptr is assigned to the pointer-to-pointer dptr

    printf("dptr-1: %p\n", (void*)(dptr-1));
    printf("dptr: %p\n", (void*)dptr);
    printf("dptr+1: %p\n", (void*)(dptr+1));
    printf("size of data type: %zu\n", sizeof(ptr));
    return 0;
}