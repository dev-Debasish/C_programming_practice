// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1[] = "apple";
//     char str2[] = "banana";
//     char str3[] = "apple";

// // result is in +ve or -ve integer
//     int result1 = strcmp(str1,str2);
//     int result2 = strcmp(str1,str3);
//     int result3 = strcmp(str2,str3);

//     printf("%s and %s = %d\n",str1,str2,result1);
//     printf("%s and %s = %d\n",str1,str3,result2);
//     printf("%s and %s = %d\n",str2,str3,result3);

//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int main(){
    // char dest[50] = "hello, ";
    // char src[] = "world!";

    // strcat(dest,src);

    // printf("concated string: %s\n",dest);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>

// int main(){
//     char dest[50] = "hello, ";
//     char src[] = "world!";

//     strncat(dest,src,4);

//     printf("concated string: %s\n",dest);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>

// int main(){
//     char dest[50];
//     char src[] = "hii,bittu!";

//     strcpy(dest,src);
//     printf("Source: %s\n", src);
//     printf("copied string: %s\n",dest);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>

// int main(){
//     char dest[50];
//     char src[] = "hii,bittu!";

//     strncpy(dest,src,4);
//     printf("Source: %s\n", src);
//     printf("copied string: %s\n",dest);
//     return 0;
// }




#include<stdio.h>
#include<string.h>

int main(){
    char str[] ="kusumda is my, village";
    // int result = strlen(str);
    // printf("%d\n",result);

// pro programmer are doing that;
    size_t length = strlen(str);
    printf("%zu",length);
    return 0;
}