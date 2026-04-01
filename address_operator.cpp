#include <stdio.h>

int main() {
    char c = 'a';
    printf("c: %c\n", c);  // Output: c: a
    printf("Address of (&c): 0x%0x", c);  // Output the address of variable c in hexadecimal format
    printf("\n");
    return 0;
}