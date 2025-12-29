#include <stdio.h>  // Include the standard input/output header file.

int main() {  
    int j, sum = 0;  // Declare variables 'j' for the loop counter and 'sum' to store the sum.

    printf("The first 10 natural numbers are :\n");  // Print a message to indicate the output.

    for (j = 1; j <= 10; j++)  // Start a for loop to iterate from 1 to 10.
    {
        sum = sum + j;  // Add the current value of 'j' to the sum.
        printf("%d ", j);  // Print the current value of 'j'.
    }

    printf("\nThe Sum is : %d\n", sum);  // Print the sum of the first 10 natural numbers.
    return 0;  // Indicate successful execution of the program.
}