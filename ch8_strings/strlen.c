/*
strlen(const char *str)
Returns the length of the string pointed to by str, excluding the null terminator.
Example: size_t len = strlen(str);
*/


// In the strlen function, the null terminator (\0) is not counted. The strlen function returns the number of characters in the string excluding the null terminator.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";

    // Calculate the length of the string
    size_t length = strlen(str);

// In C, size_t is a type used for representing the size of objects in memory and is returned by functions like strlen. 

    printf("The length of the string is: %zu\n", length);

//    OTHERWIZE DOING THAT----->
    // int result = strlen(str);
    // printf("%d\n",result);

    return 0;
}



// Using size_t helps ensure that your code is portable and can handle various sizes of objects efficiently and safely.

/*
In this example:

size_t length = strlen(str); stores the length of the string returned by strlen.

%zu is used in the printf format string to correctly display size_t values.
*/

