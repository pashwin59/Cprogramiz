//example where the condition in the do-while loop is false initially

#include <stdio.h>

int main() {
    int i = 10; // Initialize 'i' to 10, which is greater than 5.

    do { // Start of the do-while loop.
        printf("Value of i = %d\n", i); // Print the current value of 'i'.
    } while (i < 5); // Condition is false initially

    return 0;
}
