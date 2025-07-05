/*
strcat(char *dest, const char *src)
Appends the string pointed to by src to the end of the string pointed to by dest.
Example: strcat(dest, src);
*/

#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";  // Make sure the destination has enough space
    char src[] = "World!";

    // Concatenate src to dest
    strcat(dest, src);   // first destination then source and store the string at destination ;

    printf("Concatenated String: %s\n", dest);

    return 0;
}

