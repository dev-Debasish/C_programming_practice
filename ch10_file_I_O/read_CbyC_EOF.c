// #include<stdio.h>

// int main(){
//     char ch;
//     FILE *ptr;
//     ptr = fopen("bittu5.txt","r");
//     while (1)
//     {
//         ch = fgetc(ptr);
//         printf("%c",ch);
//         if (ch == EOF)
//         {
//             break;
//         }
//     }
//     fclose(ptr);
//     return 0;
// }

#include<stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("bittu5.txt", "r");

    if (ptr == NULL) {
        printf("File does not exist, SORRY!\n");
        return 1; // Exit if the file couldn't be opened
    }

    while (1) {
        ch = fgetc(ptr);
        if (ch == EOF) {
            break; // Exit the loop if end of file is reached
        }
        printf("%c", ch);
    }

    fclose(ptr); // Correctly placed here
    return 0;
}
