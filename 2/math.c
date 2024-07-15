/*
 * math.c
 *
 * A simple math library for basic arithmetic operations.
 * Provides functions for addition, multiplication, and calculating the factorial of a number.
 */

#include "math.h"
int global_var[4096] = {5};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to calculate the factorial of a non-negative integer
int factorial(int n) {
    if (n < 0) {
        return -1; // Factorial of a negative number is not defined
    }
    if (n == 0) {
        return 1; // Base case: 0! = 1
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
