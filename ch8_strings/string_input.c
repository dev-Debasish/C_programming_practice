#include <stdio.h>

int main()
{
    char st[5]; // it is important to show the value that how many character we want to..
    scanf("%s",&st /*st*/); // using scanf we can't take multi-word strings with spaces
    printf("%s",st);
    return 0;

    /*

    The code you've provided has a buffer (char st[5];) that can only hold 4 characters plus a null terminator ('\0'). If the user inputs more than 4 characters, the additional characters can cause the program to behave unpredictably. This is because:

    Buffer Overflow: When you try to input a string longer than 4 characters, it exceeds the allocated space for st, leading to a buffer overflow. This can overwrite adjacent memory and cause undefined behavior.

    Inadequate Size: The buffer char st[5] is not large enough to handle strings longer than 4 characters, considering that one character is reserved for the null terminator ('\0'), which indicates the end of the string in C.

    */

   /*

    1) char st[100]; // Now it can hold up to 99 characters plus the null terminator.

    2) scanf("%4s", st); // This ensures that scanf reads at most 4 characters.

3)
    Use fgets for Safe Input: To handle strings with spaces and avoid buffer overflow, you can use fgets instead of scanf.

        #include <stdio.h>
        int main() {
            char st[100]; // Adjust size according to your needs.
            printf("Enter a string: ");
            fgets(st, sizeof(st), stdin); // Read up to 99 characters, and it can include spaces.
            printf("You entered: %s", st);
            return 0;
        }

    fgets(st, sizeof(st), stdin);: This reads up to sizeof(st) - 1 characters, including spaces, and ensures that the string is null-terminated.

   */


    

}