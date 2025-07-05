/*
strncmp(const char *str1, const char *str2, size_t n)
Compares up to n characters of the strings str1 and str2. Returns 0 if they are equal, a negative value if str1 is less than str2, and a positive value if str1 is greater than str2.
Example: int result = strncmp(str1, str2, n);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello, bittu!";
    char str2[] = "hello, debasish!";

    int result = strncmp(str1, str2, 5);

    if (result == 0)
    {
        printf("The first 5 characters are the same.\n");
    }
    else if (result < 0)
    {
        printf("The first 5 characters of str1 are less than str2.\n");
    }
    else
    {
        printf("The first 5 characters of str1 are greater than str2.\n");
    }

    return 0;
}