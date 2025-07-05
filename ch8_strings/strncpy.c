
/*
strncpy(char *dest, const char *src, size_t n)
Copies up to n characters from the string pointed to by src to dest. If src is shorter than n characters, the rest of dest is padded with null characters.
Example: strncpy(dest, src, n);

*/


#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20]; // Make sure the destination is large enough

    // Copy up to 5 characters from src to dest
    strncpy(dest, src, 5);

    // Null-terminate the destination string
    dest[5] = '\0';

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
