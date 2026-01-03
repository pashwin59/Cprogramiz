#include <stdio.h>

int main() {
    int i;
    float salary, sum = 0, average;

    for (i = 1; i <= 500; i++) {
        printf("Enter salary of employee %d: ", i);
        scanf("%f", &salary);
        sum = sum +  salary;
    }

    average = sum / 500;

    printf("\nAverage salary of 500 employees = %.2f\n", average);

    return 0;
}
