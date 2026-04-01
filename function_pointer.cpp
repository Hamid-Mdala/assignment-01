#include <stdio.h>

void funcOne() {
    printf("funcOne was called\n");
}

void funcTwo() {
    printf("funcTwo was called\n");
}

int main() {
    funcOne();
    funcTwo();
    printf("Address of funcOne: 0x%0x\n", funcOne);  // Output: Address of funcOne: 0x4005d6 (the actual address may vary)
    printf("Address of funcTwo: 0x%0x\n", funcTwo);  // Output: Address of funcTwo: 0x4005e6 (the actual address may vary)
    return 0;
}