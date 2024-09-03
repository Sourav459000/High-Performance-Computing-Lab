// Write a program in c that declares an integer variable, assigns it a value, and then prints its address using a pointer.

#include <stdio.h>

int main() {
    int num = 42;       
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)ptr);

    return 0;
}

