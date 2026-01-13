#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    printf("After concatenation: %s", str1);

    return 0;
}









// C program to implement
// the above approach
// #include <stdio.h>
// #include <string.h>

// // Driver code
// int main()
// {
//     // Define a temporary variable
//     char example[100];

//     // Copy the first string into
//     // the variable
//     strcpy(example, "Geeks");

//     // Concatenate this string
//     // to the end of the first one
//     strcat(example, "ForGeeks");

//     // Display the concatenated strings
//     printf("%s\n", example);

//     return 0;
// }