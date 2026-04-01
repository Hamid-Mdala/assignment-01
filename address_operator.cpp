#include <stdio.h>

int main() {
    char c = 'a';
    printf("c: %c\n", c);  // Output: c: a
    printf("Address of (&c): %p\n", (void*)&c);   //this actually prints the address of the variable c in memory, which is a hexadecimal value that represents the location of c in memory
    printf("\n");
    return 0;
}