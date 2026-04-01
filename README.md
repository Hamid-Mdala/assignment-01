# Assignment 01 — Pointers & Arrays (Snapshot-style results + source)

This repository contains small C++ programs that demonstrate pointers, arrays, function pointers, and related concepts. Below you'll find a snapshot-style README: for each implemented source file I include (1) a short description, (2) a Snapshot — Output block showing the exact terminal output observed when running the matching executable from `build/bin`, and (3) the full Source code of the program.

How to build and run

```bash
# from project root
mkdir -p build && cd build
cmake ..
make
# then run an executable:
cd build/bin
./address_operator
```

Files
-----

- addition_integer.cpp

Snapshot — Output
```
Running file: addition integer.cpp
ptr1: 0xeddae1f0
ptr2: 0xeddae1f4
ptr3: 0xeddae1f8
size of data type: 4
```

Source
```cpp
#include <stdio.h>

int main() {
    printf("Running file: addition integer.cpp\n");
    int num = 7;
    int *ptr = NULL;
    ptr = &num;  //the address of the variable num is assigned to the pointer ptr

    printf("ptr1: 0x%0x\n", ptr-1);  // Output: ptr1: 0x... (address may vary)
    printf("ptr2: 0x%0x\n", ptr);    // Output
    printf("ptr3: 0x%0x\n", ptr+1);    // Output: ptr3: 0x... (address may vary)
    printf("size of data type: %d\n", sizeof(int));  // Output: size of data type: 4
    return 0;
}
```

- addition_to_address.cpp

Snapshot — Output
```
Running file: addition to address.cpp
ptr1: 0xe5c89306
ptr2: 0xe5c89307
ptr3: 0xe5c89308
size of data type: 1
```

Source
```cpp
#include <stdio.h>
#include <string.h>
int main() {
    printf("Running file: addition to address.cpp\n");
    char c ='a';
    char *ptr = NULL;  //the pointer is initialized to NULL
    ptr = &c;  //the address of the variable c is assigned to the pointer

    printf("ptr1: 0x%0x\n", ptr-1);  // address minus 1 byte (may vary)
    printf("ptr2: 0x%0x\n", ptr);
    printf("ptr3: 0x%0x\n", ptr+1);    // address plus 1 byte (may vary)

    printf("size of data type: %d\n", sizeof(char));  // typically 1
    return 0;
}
```

- address_operator.cpp

Snapshot — Output
```
c: a
Address of (&c): 0x7ffe9d00455f
```

Source
```cpp
#include <stdio.h>

int main() {
    char c = 'a';
    printf("c: %c\n", c);  // Output: c: a
    printf("Address of (&c): %p\n", (void*)&c);   //this actually prints the address of the variable c in memory, which is a hexadecimal value that represents the location of c in memory
    printf("\n");
    return 0;
}
```

- array.cpp

Snapshot — Output
```
21
21
```

Source
```cpp
#include <stdio.h>

int main() {
    int arr[3] = {7, 14, 21};
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr+2));
    return 0;
}
```

- array_addition.cpp

Snapshot — Output
```
>> Before function call <<
12345678910
>> After function call <<
101102103104105106107108109110
```

Source
```cpp
#include <stdio.h>

void addNumber(int *ptr) {
    for (int i = 0; i < 10; i++) {
        ptr[i] += 100;  // add 100 to each element
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf(">> Before function call <<\n");
    for (int i = 0; i < 10; i++) printf("%d", arr[i]);
    printf("\n");
    addNumber(arr);
    printf(">> After function call <<\n");
    for (int i = 0; i < 10; i++) printf("%d", arr[i]);
    printf("\n");
    return 0;
}
```

- array_pointer_2.cpp

Snapshot — Output
```
3
```

Source
```cpp
#include <stdio.h>

int main() {
    char temp[5] = {1,2,3,4,5};
    char *ptr = temp+4;
    printf("%d\n", ptr[-2]);  // prints temp[2]
    return 0;
}
```

- call_function_using_addresses_as_the_parameter.cpp

Snapshot — Output
```
<< Before function call <<
num1: 10
num2: 50
<< After function call <<
num1: 50
num2: 10
```

Source
```cpp
#include <stdio.h>

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 50;
    printf("<< Before function call <<\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    swap(&num1, &num2);

    printf("<< After function call <<\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    return 0;
}
```

- dereferencing_operator.cpp

Snapshot — Output
```
Address of ptr: 0xe62853a7
Value at ptr: a
```

Source
```cpp
#include <stdio.h>

int main() {
    char c='a';
    char *ptr=NULL;
    ptr=&c;
    printf("Address of ptr: 0x%0x\n", ptr);
    printf("Value at ptr: %c\n", *ptr);
    return 0;
}
```

- double_pointer.cpp

Snapshot — Output
```
dptr-1: 0x7fffa1b657e0
dptr: 0x7fffa1b657e8
dptr+1: 0x7fffa1b657f0
size of data type: 8
```

Source
```cpp
#include <stdio.h>

int main() {
    char c = 'a';
    char *ptr = NULL;
    char **dptr = NULL;

    ptr = &c;
    dptr = &ptr;

    printf("dptr-1: %p\n", (void*)(dptr-1));
    printf("dptr: %p\n", (void*)dptr);
    printf("dptr+1: %p\n", (void*)(dptr+1));
    printf("size of data type: %zu\n", sizeof(ptr));
    return 0;
}
```

- double_pointer_integer.cpp

Snapshot — Output
```
dptr-1: 0x48501650
dptr: 0x48501658
dptr+1: 0x48501660
size of data type: 8
```

Source
```cpp
#include <stdio.h>

int main() {
    int num = 7;
    int *ptr = NULL;
    int **dptr = NULL;
    ptr = &num;
    dptr = &ptr;
    printf("dptr-1: 0x%0x\n", dptr-1);
    printf("dptr: 0x%0x\n", dptr);
    printf("dptr+1: 0x%0x\n", dptr+1);
    printf("size of data type: %d\n", sizeof(ptr));
    return 0;
}
```

- function_call_using_pointer.cpp

Snapshot — Output
```
Using a name of function: 30
Using a function pointer: 30
```

Source
```cpp
#include <stdio.h>

int adder(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int (*fptr) (int, int);
    fptr = adder;

    printf("Using a name of function: %d\n", adder(10, 20));
    printf("Using a function pointer: %d\n", fptr(10, 20));
    return 0;
}
```

- function_call_using_pointer2.cpp

Snapshot — Output
```
Adder was called
15
Divider was called
2
```

Source
```cpp
#include <stdio.h>

int adder(int n1, int n2) {
    printf("Adder was called\n");
    return n1 + n2;
}

int divider(int n1, int n2) {
    printf("Divider was called\n");
    return n1 / n2;
}

void printResult(int n1, int n2, int (*fptr) (int n1, int n2)) {
    printf("%d\n", fptr(n1, n2));
}

int main() {
    int num1 = 10;
    int num2 = 5;
    printResult(num1, num2, adder);
    printResult(num1, num2, divider);
    printf("\n");
    return 0;
}
```

- function_pointer.cpp

Snapshot — Output
```
funcOne was called
funcTwo was called
Address of funcOne: 0x400476
Address of funcTwo: 0x400487
```

Source
```cpp
#include <stdio.h>

void funcOne() { printf("funcOne was called\n"); }
void funcTwo() { printf("funcTwo was called\n"); }

int main() {
    funcOne();
    funcTwo();
    printf("Address of funcOne: 0x%0x\n", funcOne);
    printf("Address of funcTwo: 0x%0x\n", funcTwo);
    return 0;
}
```

- function_pointer_the_end.cpp

Snapshot — Output
```
func1 was called
func2 was called
```

Source
```cpp
#include <stdio.h>

void func1() { printf("func1 was called\n"); }
void func2() { printf("func2 was called\n"); }

void (*whatFunction(int sel))(void) {
    if (sel == 1) return func1;
    else if (sel == 2) return func2;
    else return nullptr;
}

int main() {
    void(*fptr)(void);
    fptr = whatFunction(1);
    if (fptr) fptr();
    fptr = whatFunction(2);
    if (fptr) fptr();
    printf("\n");
    return 0;
}
```

- pointer_and_array.cpp

Snapshot — Output
```
14
14
```

Source
```cpp
#include <stdio.h>

int main() {
    int arr[3] = {7, 14, 21};
    int *ptr = arr;
    printf("%d\n", ptr[1]);
    printf("%d\n", *(ptr+1));
    return 0;
}
```

- void_pointer.cpp

Snapshot — Output
```
100
```

Source
```cpp
#include <stdio.h>

int main() {
    int num = 100;
    void *ptr = &num;
    printf("%d\n", *(int*)ptr);
    return 0;
}
```

---
