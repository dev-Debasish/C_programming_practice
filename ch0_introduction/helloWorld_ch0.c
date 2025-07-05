// #include<stdio.h>

// int main()
// {
//     printf("hello world!");
//     return 0;
// }


#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input the integer number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reversing the integer
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit3
        reverse = reverse * 10 + remainder;  // Append it to the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Output the reversed integer
    printf("Reversed number: %d\n", reverse);

    // Extract and print each digit of the reversed number
    printf("Digits of the reversed number: ");
    while (reverse != 0) {
        remainder = reverse % 10;       // Extract the last digit
        printf("%d ", remainder);       // Print the digit
        reverse /= 10;                  // Remove the last digit
    }
    printf("\n");

    return 0;
}

