// Declare an integer array, initialize it, and use a pointer to print each element in the array.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}

