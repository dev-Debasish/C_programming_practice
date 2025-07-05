#include<stdio.h>
#include<math.h>

int main(){
    int a = 1;
    // pow function returns double so,we use (%f) instead of (%d)
    printf("the area of a square is %f",pow(a,2));

    return 0;
}