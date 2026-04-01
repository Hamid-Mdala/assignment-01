#include <stdio.h>

int main() {
    int num = 100;

    void *ptr = &num;  // A void pointer can point to any data type, but it cannot be dereferenced directly without casting
    printf("%d\n", *(int*)ptr);  // To dereference a void pointer, you need to cast it to the appropriate type (in this case, int*)

    return 0;
}