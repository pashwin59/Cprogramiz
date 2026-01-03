// Program to find the average of n numbers using arrays

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];   // array to store n numbers

    // taking input from the user
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum = sum +  numbers[i];   // add each number to sum
    }

    // calculating average
    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
