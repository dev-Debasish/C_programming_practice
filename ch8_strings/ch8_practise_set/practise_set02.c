#include<stdio.h>
#include<string.h>

int main(){
    char str[6];
    /*
    // scanf("%s",str);  // buffer overflow problem while printing
    fgets(str,sizeof(str),stdin); 
    // get the full string but results is according to size and it also included the '\0' ;
    printf("%s",str);
*/


printf("Input:");
//here we use (5) instead of (6) as str[5] = '\0';
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&str[i]); // here it include the space when every time we press the enter button or spacebar that's why we cann't input the full string
        fflush(stdin);
    }
    str[5] = '\0';

    printf("output = %s",str);
    return 0;
}



// #include <stdio.h>

// int main() {
//     char str[6];

//     printf("Enter a string of up to 5 characters: ");

//     for (int i = 0; i < 5; i++) {
//         scanf("%c", &str[i]);

//         // Break if a newline or space is encountered
//         if (str[i] == '\n' || str[i] == ' ') {
//             str[i] = '\0';  // Null-terminate the string
//             break;
//         }
//     }

//     str[5] = '\0';  // Ensure the string is null-terminated

//     // Clear the input buffer if there are leftover characters
//     int ch;
//     while ((ch = getchar()) != '\n' && ch != EOF);

//     printf("You entered: %s\n", str);

//     return 0;
// }
