/*
strcmp(const char *str1, const char *str2)
Compares the two strings str1 and str2. Returns 0 if they are equal, a negative value if str1 is less than str2, and a positive value if str1 is greater than str2.
Example: int result = strcmp(str1, str2);

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    int result1 = strcmp(str1, str2);  // Should be negative interger as {a} has the lower ASCII value than {b}
    int result2 = strcmp(str1, str3);  // Should be zero
    int result3 = strcmp(str2, str1);  // Should be positive integer as {b} has the higher ASCII value than {a}


// result store in another variable and it should be interger;
    printf("Comparing '%s' with '%s': %d\n", str1, str2, result1);
    printf("Comparing '%s' with '%s': %d\n", str1, str3, result2);
    printf("Comparing '%s' with '%s': %d\n", str2, str1, result3);

    return 0;
} 
