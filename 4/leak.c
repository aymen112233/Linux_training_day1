#include <stdio.h>
#include <stdlib.h>
#include <asm/unistd.h>
#include <asm/fcntl.h>
int main() {
    int *array;
    int size = 10;

    // Allocate memory for an array of 10 integers
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    // Print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Forgot to free the allocated memory
    //free(array);

    return 0;
}
