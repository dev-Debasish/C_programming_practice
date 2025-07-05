#include<stdio.h>

int fibo(int );

int fibo(int n){
    if(n == 1 || n == 2){
        return (n-1);
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    // fibonacci series;
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ...
    // fibo(n) = fibo(n-1) + fibo(n-2); but here first and second index are the base case..

    int num = 6;
    printf("%d",fibo(num));
    return 0; 
}