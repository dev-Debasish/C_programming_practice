#include<stdio.h>

int main(){
    FILE *ptr;
    //  for reading the file, if the file does not exist fopen returns NULL; so we need to creat the file first before reading. 
    ptr = fopen("bittu2.txt","r");
    if (ptr == NULL)
    {
        printf("file does not Exist,SORRY!");
    }
    else{
        int num;
        fscanf(ptr,"%d",&num);
        printf("%d\n",num);
        fclose(ptr); //  Correctly placed and indented
    }
    
    return 0;
}