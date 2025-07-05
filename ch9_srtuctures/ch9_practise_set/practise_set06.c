// #include<stdio.h>

// struct complexNumber{
//     int real;
//     int imaginary;
// };

// void display(struct complexNumber cn){
//      printf("%d + %di\n",cn.real,cn.imaginary);
// }

// int main(){
//     struct complexNumber num[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter real numbers:");
//         scanf("%d",&num[i].real);
//         printf("Enter imaginary numbers:");
//         scanf("%d",&num[i].imaginary);
//         display(num[i]);
//     }
    

//     return 0;
// }



// another one --->


#include <stdio.h>

struct complexNumber {
    int real;
    int imaginary;
};

// Modify the function to accept a pointer to a struct complexNumber
// here we include the size as this is the function of {array of structure}.
void display(struct complexNumber cn[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d + %di\n", cn[i].real, cn[i].imaginary);
    }
}

int main() {
    struct complexNumber num[5];

    // Input the complex numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter real part for complex number %d: ", i + 1);
        scanf("%d", &num[i].real);
        printf("Enter imaginary part for complex number %d: ", i + 1);
        scanf("%d", &num[i].imaginary);
    }

    // Display the complex numbers
    display(num, 5);

    return 0;
}
