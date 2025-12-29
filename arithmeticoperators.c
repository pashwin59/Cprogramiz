#include <stdio.h>

int main() {

    int a = 25, b = 5;

    // using operators and printing results
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    // printf("+a = %d\n", +a);
    // printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);   //why a++ is 25 and 
    printf("a-- = %d\n", a--); //why a-- is 26

    return 0;
}