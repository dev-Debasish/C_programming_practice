#include<stdio.h>

int change(int*);

int change(int* a){  // misnomer
    *a = 77;
    return *a;
}

int main(){
    
    int b = 22;
    change(&b);
    printf("%d",b); // returns 77 as here we pass the address of b and we also use pointers to change them.
    
    // int b;
    // printf("%d",change(b));

    // printf("%d",change(22));  // it return as it is (77)

    return 0;
}