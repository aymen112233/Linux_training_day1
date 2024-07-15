#include <stdio.h>

int main() {
    int *ptr = NULL; // Create a null pointer
    printf("%d\n", *ptr); // Dereference the null pointer to cause a segmentation fault
    return 0;
}
