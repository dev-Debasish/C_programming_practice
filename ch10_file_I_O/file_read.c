#include<stdio.h>

int main(){
    FILE *ptr;
    //  for reading the file, if the file does not exist fopen returns NULL; so we need to creat the file first before reading. 
    // it reads the data from the file 
    ptr = fopen("bittu.txt","r");
    int num;
    //for reading the file we use (fscanf) and for printing this we use normal (printf) function

    fscanf(ptr,"%d",&num);
    printf("%d\n",num);  // if the file is empty it also returns NULL;

// using this one time it returns only the one interger as we specified it as integer datatype ;
// using this multiple time it returns the next integer as in read mode the file pointer is moving to the next everytime. and so on...
    fscanf(ptr,"%d",&num);
    printf("%d\n",num);  

    fscanf(ptr,"%d",&num);
    printf("%d\n",num);  
    fclose(ptr);
    return 0;
}