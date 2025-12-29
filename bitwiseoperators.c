#include <stdio.h>

int main() {
    int a = 5, b = 3;

    // Binary:
    // a = 5  -> 0101
    // b = 3  -> 0011

    printf("a = %d, b = %d\n\n", a, b);

    // Bitwise AND
    printf("a & b  = %d\n", a & b);   // 0001 -> 1

    // Bitwise OR
    printf("a | b  = %d\n", a | b);   // 0111 -> 7

    // Bitwise XOR
    printf("a ^ b  = %d\n", a ^ b);   // 0110 -> 6

    // Bitwise NOT
    printf("~a     = %d\n", ~a);      // Two's complement

    // Left Shift
    printf("a << 1 = %d\n", a << 1);  // 1010 -> 10

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1);  // 0010 -> 2

    return 0;
}
