// #include<stdio.h>

// int main(){
//     char st[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c",&st[i]);
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\t",st[i]);
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    char st[6]; // Increased the size to 6 to accommodate the null terminator

    printf("Enter 5 characters: ");
    for (int i = 0; i < 5; i++) {
        scanf("%c", &st[i]);
    }

    st[5] = '\0'; // Null-terminate the string

    printf("You entered: %s\n", st); // Print the string

    return 0;
}
