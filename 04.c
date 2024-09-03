// Develop a program that computes the sum of elements in an integer array using a pointer.

#include <stdio.h>
#include <omp.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int *ptr = arr;
    
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}

