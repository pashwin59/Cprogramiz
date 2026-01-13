// WAP TO find the largest and smallest number among 

#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d", smallest);

    return 0;
}
