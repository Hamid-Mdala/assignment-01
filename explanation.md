Q2. Describe in details the relationship between the code and memory

The code demonstrates several key relationships between C++ code and memory:

**Global Variable (Data Segment):**
- `int g_num1 = 10;` is stored in the data segment of memory
- Global variables have fixed memory addresses for the program's lifetime

**Stack Memory Usage:**
- Local variables in `main()` (`a`, `b`, `c`, `ptr1`, `ptr2`) are allocated on the stack
- Each integer variable uses 4 bytes of stack memory
- Stack memory is automatically managed - allocated when variables come into scope, deallocated when they go out of scope
- Function parameters (`num1`, `num2`) and local variable `temp` in `adder()` function are also stack-allocated

**Heap Memory Usage:**
- `malloc()` allocates memory on the heap for dynamic storage
- `ptr1` and `ptr2` are stack variables that point to heap-allocated memory
- Heap memory must be manually managed with `malloc()` and `free()`
- The code allocates 5 bytes (4 bytes + 1 extra) for each pointer

**Memory Management:**
- The code shows proper memory management by calling `free()` to deallocate heap memory
- This prevents memory leaks and dangling pointers














Q3. Investigate the STACK, HEAP, CODE, and DATA segmentation areas and explain their relationships to the code in detail

**STACK Segment:**
- Contains: Local variables (`a`, `b`, `c`, `ptr1`, `ptr2`), function parameters (`num1`, `num2`), local variables in functions (`temp`)
- Size: Each integer = 4 bytes, each pointer = 4 bytes (on 32-bit systems)
- Management: Automatic LIFO (Last In, First Out) management
- Relationship: Used for all local variables and function call management

**HEAP Segment:**
- Contains: Dynamically allocated memory via `malloc()`
- Size: 5 bytes allocated for each of the two pointers
- Management: Manual management required (malloc/free)
- Relationship: Used when the program needs memory that persists beyond function scope or when size isn't known at compile time

**CODE Segment:**
- Contains: The actual compiled machine code for `main()` and `adder()` functions
- Size: Varies based on compiled code
- Management: Read-only, loaded when program starts
- Relationship: Contains all executable instructions including function definitions

**DATA Segment:**
- Contains: Global variables (`g_num1 = 10`)
- Size: 4 bytes for the global integer
- Management: Fixed for program lifetime
- Relationship: Stores global and static variables that exist throughout program execution

**Memory Layout Relationships:**
- The code demonstrates how these segments work together: functions in CODE segment manipulate variables in DATA, STACK, and HEAP segments
- Stack variables (pointers) reference heap memory
- Global variables in DATA segment are accessible from any function in CODE segment
- The program flow moves between these segments as it executes














