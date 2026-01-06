#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {        // rows ... outer loop
        for (j = 1; j <= i; j++) {    // stars in each row ... inner loop
            printf("* ");
        }
        printf("\n");                 // new line after each row
    }

    return 0;
}
