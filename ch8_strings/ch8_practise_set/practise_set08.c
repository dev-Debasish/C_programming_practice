#include<stdio.h>
#include<string.h>

int main(){
    char c = 'a';
    int contains = 0;
    char str[] = "ghwsdc hc gywdcehbgunh c";
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == c)
            {
                contains = 1;
                break;
            } 
        }

        if (contains)
        {
            printf("yes, it contains.");
        }
        else{
            printf("no,it doesn't contain.");
        }
        
        
    return 0;
}