// Write a program that takes an array of integers and reverses it using pointers.

#include <stdio.h>
#include <omp.h>

void reverseArray(int *arr, int size) {
    int temp;
    
    #pragma omp parallel for private(temp)
    for (int i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);
    
    printf("Reversed Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}