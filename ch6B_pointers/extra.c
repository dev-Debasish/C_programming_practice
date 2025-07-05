// #include <stdio.h>

// // Function to calculate factorial of a number
// int factorial(int num) {
//     if(num == 0 || num == 1){
//         return 1;
//     }
//     else{
//         return num * factorial(num - 1); // recursion used
//     }
// }

// // Function to calculate nCr (Combinations)
// int nCr(int n, int r) {
//     if (r > n) return 0; // Invalid case
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// // Function to calculate nPr (Permutations)
// int nPr(int n, int r) {
//     if (r > n) return 0; // Invalid case
//     return factorial(n) / factorial(n - r);
// }

// int main() {
//     int n, r;

//     // Input values for n and r
//     printf("Enter value of n: ");
//     scanf("%d", &n);
//     printf("Enter value of r: ");
//     scanf("%d", &r);

//     // Calculate and display nCr and nPr
//     printf("nCr (Combinations) = %d\n", nCr(n, r));
//     printf("nPr (Permutations) = %d\n", nPr(n, r));

//     return 0;
// }


// //----------------------------------------------------------------------------


// #include<stdio.h>

// int fibonacci(int );

// int fibonacci(int n){
//     if(n == 1 || n == 2){
//         return n-1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     int num;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     printf("the valve of fibonacci series at %d is %d",num,fibonacci(num));
//     return 0;
// }

//---------------------------------------------------------------------------------

#include <stdio.h>

// Function to display the first n Fibonacci numbers
void display_fibonacci(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    int a = 0, b = 1;

    // Print the first Fibonacci number
    if (n >= 1) {
        printf("%d ", a);
    }

    // Print the second Fibonacci number
    if (n >= 2) {
        printf("%d ", b);
    }

    // Calculate and print the rest of the Fibonacci numbers
    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    int n;

    // Input the number of Fibonacci numbers to display
    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);

    // Display the first n Fibonacci numbers
    display_fibonacci(n);

    return 0;
}
