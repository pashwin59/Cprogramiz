#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C programming language";
    char sub[] = "programming";

    if (strstr(str, sub) != NULL) {
        printf("Substring found\n");
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
