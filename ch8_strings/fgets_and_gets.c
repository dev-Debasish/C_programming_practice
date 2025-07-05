
// differenciate gets and fgets and tell which is bettter

/*

The functions gets and fgets in C are both used for reading strings from standard input, but they have significant differences in terms of functionality and safety. Let's compare them and discuss which one is better.

gets:

[Functionality]:
The gets function reads an entire line of input until a newline character (\n) is encountered.
It does not include the newline character in the resulting string, and it automatically adds a null terminator (\0) at the end of the string.

Syntax: char *gets(char *str);

Limitations and Risks:

{Buffer Overflow}: gets does not perform bounds checking, meaning it will keep reading input until a newline is encountered, regardless of the size of the buffer provided. This can lead to a buffer overflow, where data overflows the allocated memory, potentially causing crashes, security vulnerabilities, or unexpected behavior.

{Deprecated}: Due to its unsafe nature, gets has been removed from the C11 standard, and modern C compilers may not even support it.

// FIXME:
fgets:

Functionality:
The fgets function reads up to n-1 characters from a given input stream (usually stdin) and stores them in the specified buffer. It stops reading when it encounters a newline character or reaches the specified limit, whichever comes first.
It includes the newline character in the string (if it fits within the limit) and always null-terminates the string.

Syntax: char *fgets(char *str, int n, FILE *stream);

Example: fgets(str, sizeof(str), stdin); reads up to sizeof(str)-1 characters into str.

[Advantages]:
{Safety}: fgets allows you to specify the maximum number of characters to read, which prevents buffer overflow by ensuring that the input fits within the allocated buffer.
{Control}: You have control over how much data is read, making it a safer and more flexible option compared to gets.
{Handles Newline}: fgets preserves the newline character if it fits in the buffer, which can be useful for certain applications.

*/

/*
Advantages:

Safety: fgets allows you to specify the maximum number of characters to read, which prevents buffer overflow by ensuring that the input fits within the allocated buffer.
Control: You have control over how much data is read, making it a safer and more flexible option compared to gets.
Handles Newline: fgets preserves the newline character if it fits in the buffer, which can be useful for certain applications.
Which is Better?
fgets is clearly the better option. Here's why:

Safety: fgets prevents buffer overflows by limiting the number of characters read. This is crucial for writing secure and robust C programs.

Control: With fgets, you have explicit control over the size of the input, reducing the risk of undefined behavior.

Deprecated gets: Given that gets is unsafe and deprecated, it's strongly advised to avoid it altogether in modern C programming.
*/

// Using gets (Unsafe and Deprecated):

#include <stdio.h>

int main() {
    char buffer[10];
    // Warning: gets is unsafe and should not be used
    gets(buffer);  // throws error
    printf("You entered: %s\n", buffer);
    return 0;
}


//  Using fgets (Safe):

#include <stdio.h>

int main() {
    char buffer[10];
    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("You entered: %s\n", buffer);
    return 0;
}


/*
Buffer Size Control: In the fgets example, sizeof(buffer) ensures that no more than 9 characters (plus the null terminator) are read, protecting against buffer overflow.
Summary:
Use fgets for safe and controlled input handling.
Avoid gets due to its inherent risk of buffer overflow and its removal from the C standard.
*/