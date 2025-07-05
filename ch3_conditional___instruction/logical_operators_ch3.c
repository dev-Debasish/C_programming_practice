#include<stdio.h>

int main(){
    // && || !
    // here 1 represents to true
    // here 0 represents to false
    int i=1,j=1;
    printf("%d\n",i&&j);
    printf("%d\n",i||j);
    printf("%d\n",!i);
//-----------------------------------------
    if(i){
        if(j){
            printf("both ar true\n");     
            }
    }
   // or.
    if(i&&j){
        printf("both are true!");
    }
// -----------------------------------------
    return 0;

}