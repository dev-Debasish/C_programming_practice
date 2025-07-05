#include<stdio.h>

void swap(int* , int*);

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    /*
    In function call we can't change the value of the main function to the other function. As the copy of the main function variable goes to the other function that's why we can't change the value of that function

    that's why we used the call by reference ----> here we pass the address of the variable in the function .
    and in the function we used pointer variable to change the value
    */
   int x = 4;
   int y = 6;
   swap(&x,&y); 
   printf("x = %d, y = %d\n", x, y);  // Print the swapped values
    return 0;
}

