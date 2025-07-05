
/*
strcpy(char *dest, const char *src)
Copies the string pointed to by src (including the null terminator) to the buffer pointed to by dest.
Example: strcpy(dest, src);


*/

#include<stdio.h>
#include<string.h>

int main(){
    char src[] = "hello,world!";
    char dest[50] ; // Ensure the destination array is large enough

    // Copy the source string to the destination array
    strcpy(dest,src);

    // Output the copied string
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    

    return 0;
}