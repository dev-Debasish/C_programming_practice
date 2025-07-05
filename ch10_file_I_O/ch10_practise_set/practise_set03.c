#include<stdio.h>

int main(){
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("previous.txt", "r");
    ptr2 = fopen("new.txt", "a");

    if (ptr == NULL) {
        printf("File does not exist, SORRY!\n");
        return 1; // Exit if the file couldn't be opened
    }

    while (1) {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF) {
            break; // Exit the loop if end of file is reached
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
        }
    }

    fclose(ptr); // Correctly placed here
    fclose(ptr2);
    return 0;
}
