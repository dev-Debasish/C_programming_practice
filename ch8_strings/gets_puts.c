#include<stdio.h>
#include<string.h>

int main(){
    char str[20];


    fgets(str,sizeof(str),stdin);

    // STRUCTURE-->
    //  fgets(buffer,This specifies the maximum number of characters that fgets will read, including the null terminator.,stdin refers to the standard input stream)

    //buffer:
    // This is a character array (or pointer to a character array) where the input string will be stored.
    // It must be large enough to hold the expected input, including the null terminator ('\0').


    

    // gets(str);  //it throws error for buffer overflow




    // Optional: Remove the newline character if you don't want it in the output. otherwise we print using [printf] function

    str[strcspn(str, "\n")] = '\0'; // to use this we need to specifie the #include<string.h>



 // IT PRINTS A NEW LINE AFTER PRINTING THE MULTI-WORD STRING
    puts(str);




    // instead of doing this --->
    // printf("%s",str);


    return 0;
}