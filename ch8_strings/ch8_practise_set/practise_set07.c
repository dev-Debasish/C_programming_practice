// #include<stdio.h>

// int print_strlen(char str[]){
//     int i = 0;
//     char c = str[0];
//     while (c != '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     int count = i-1;
//     return count;
// }

// void my_strcpy(char dest[], char src[]){
//     for (int i = 0; i < print_strlen(src); i++)
//     {
//         dest[i] = src[i] - 1;
//     }
//     dest[print_strlen(src)] = '\0';
// }

// int main(){
//     char source[] = "ifmmp-!xpsme\"";
//     char target[50];
//     my_strcpy(target,source);
//     printf("%s\n%s",source,target);
//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main(){
        char str[] = "ifmmp-!ipx!bsf!zpv";
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i] - 1;
        }

        printf("Decrypted string is = %s",str);
        
    return 0;
}