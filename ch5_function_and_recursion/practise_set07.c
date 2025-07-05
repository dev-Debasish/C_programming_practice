#include<stdio.h>
// here we use the (void) return type as we don't want to return anything .....
// if we use (int) return type here it also return its integer value as well.
void print_pattern(int n);

void print_pattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ((2*i)+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int num = 3;    // Always 
    print_pattern(num);  //  we should directly call a function without using printf
    return 0;
}