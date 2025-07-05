/*
strncat(char *dest, const char *src, size_t n)
Appends up to n characters from the string pointed to by src to the end of the string pointed to by dest.
Example: strncat(dest, src, n);

*/

#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";  // Ensure the destination has enough space
    char src[] = "World!";
    
    // Concatenate up to 3 characters from src to dest
    strncat(dest, src, 3);

    printf("Concatenated String: %s\n", dest);

    return 0;
}
