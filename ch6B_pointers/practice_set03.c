                       // CALL BY VALUE ----->
/*
#include<stdio.h>

int multiply_ten_times(int );

int multiply_ten_times(int x){
    return (x*10);
}

int main(){
    int i = 45;
    int c = multiply_ten_times(i);
    printf("%d\n",c);
    return 0;
}
*/


                      // CALL BY REFERENCE--->
#include<stdio.h>

void ten_times(int* );

void ten_times(int* a){
    *a = (*a * 10);
}

int main(){
    int x = 10;
    printf("%d\n",x);
    ten_times(&x);
    printf("%d\n",x);
    return 0;
}