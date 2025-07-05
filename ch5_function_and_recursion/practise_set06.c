// #include<stdio.h>

// int sum_of_natural_numbers(int n);

// int sum_of_natural_numbers(int n){
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//        sum += i;
//     }
//     return sum;
// }


// int main(){
//     int num = 1;
//     printf("%d\n",sum_of_natural_numbers(num));
//     return 0;
// }


//or..

#include<stdio.h>

int sum_of_natural_numbers(int n);

int sum_of_natural_numbers(int n){
    //  sum (n) = 1+2+3+4+5+6+7+......+(n-1)+n;
    //  sum(n) = sum(n-1) + n;
    if (n == 1)
    {
        return 1;
    }
    
    return sum_of_natural_numbers(n-1) + n;

}


int main(){
    printf("the sum is %d\n",sum_of_natural_numbers(10));
    return 0;
}