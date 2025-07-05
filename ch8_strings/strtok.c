/*
strtok(char *str, const char *delim)
Breaks the string str into a series of tokens separated by characters in delim. On the first call, str should be the string to tokenize. On subsequent calls, str should be NULL to continue tokenizing the same string.
Example:
--->
char *token = strtok(str, " ");
while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ");
}
*/


//-----------------ANS---------->

/*
strtok is a function in C that is used to tokenize a string, i.e., to split a string into a sequence of tokens based on a set of delimiter characters. It’s declared in the <string.h> header.

Here's how strtok works:

The first time you call strtok, you pass the string you want to tokenize and the delimiter(s).

// the delimeter that you are passed here space & comma (" ,") are neglected when the program start tokenizing the string input ;

For subsequent tokens, you pass NULL as the first argument, and strtok continues from where it left off in the previous call.
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "hello, bittu! how are you?";

// The char *token; line is crucial because it declares a pointer that holds the address of each substring (token) as strtok processes the original string. Without this pointer, you wouldn't be able to access or manipulate the individual tokens extracted by strtok.

// When you call strtok, it returns a pointer to the first token in the string. This pointer is stored in the token variable.
    char *token;

    // Tokenize the string using space and comma as delimiters
    token = strtok(str," ,");

    while (token != NULL)
    {
        printf("Token = %s\n",token);
        token = strtok(NULL," ,");
    }
    
    return 0;
}

/*
Explanation:
Input String (str): "Hello, World! This is a test."
Delimiters: " ," (space and comma)
First Call: strtok(str, " ,") returns the first token, which is "Hello".
Subsequent Calls: By passing NULL as the first argument, strtok continues to tokenize the string.
*/

/*
Important Notes:
Modifies the Input String: strtok modifies the original string by inserting null characters (\0) at the delimiter positions.
Thread Safety: strtok is not thread-safe. If you need a thread-safe version, consider using strtok_r, which is a reentrant version of strtok.
Subsequent Calls: Always use NULL as the first argument in subsequent calls to continue tokenizing the same string.
*/