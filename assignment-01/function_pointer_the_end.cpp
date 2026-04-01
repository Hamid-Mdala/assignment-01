#include <stdio.h>

void func1() {
    printf("func1 was called\n");
}

void func2() {
    printf("func2 was called\n");
}

// Correct declaration: function that takes int and returns a pointer to a function returning void
void (*whatFunction(int sel))(void) {
    if (sel == 1) {
        return func1;  // Return the address of func1 if sel is 1
    } else if (sel == 2) {
        return func2;  // Return the address of func2 if sel is 2
    } else {
        return nullptr;  // Return nullptr if sel is neither 1 nor 2
    }
}

int main() {
    void(*fptr)(void);
    fptr = whatFunction(1);  // Call whatFunction with sel = 1 and assign the returned function pointer to fptr
    if (fptr) fptr();
    fptr = whatFunction(2);  // Call whatFunction with sel = 2 and assign the returned function pointer to fptr
    if (fptr) fptr();
    printf("\n");
    return 0;
}