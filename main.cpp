#include <iostream>

int g_num1 = 10;

int adder(int num1, int num2) {
    int temp=50;          //the default value
    temp = num1 + num2;   //will be replaced with the temp when the parameters add by each other
    //std::cout << temp << std::endl; this will display 8 as the output
    return temp;
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    int *ptr1 = (int *)malloc(sizeof(int) +1);  //this one assigns 4 bytes of space to the heap
    *ptr1 = 5;  //deallocates the pointer and then assigns the value to the heap while the pointer in the stack has 4 bytes
    int a=3, b=5, c=100; //each of those variables has 4 bytes on the stack memory
    int *ptr2 = (int*)malloc(sizeof(int) +1);  //we assign another 4 bytes to the heap memory
    *ptr2=10;   //deallocate so that the pointer   //deallocate the pointer that points to the heap and assigns 4 bytes memory in the stack
    free(ptr1);  //free the ptr1 so that you do not have hanging pointers
    c=adder(a,b);   //this will be the result when we add the two variables 8
    free(ptr2);

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
