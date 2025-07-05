#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[5];  
};

int main(){
    struct employee e1;
    printf("%u\n",&e1.code);
    printf("%u\n",&e1.salary);
    printf("%u\n",&e1.name);

    

    return 0;
}




//----------------------------------------------------------------


// #include <stdio.h>

// struct Example {
//     int a;      // 4 bytes
//     char b;     // 1 byte
//     float c;    // 4 bytes
// };

// int main() {
//     struct Example ex;
//     printf("Size of structure: %lu bytes\n", sizeof(ex)); 
       // // %lu stands for unsigned long
//     return 0;
// }


                // EXPLANATION====

// Memory Layout:
// +---------+---------+---------+---------+
// |    a    |    b    | Padding |    c    |
// | 4 bytes | 1 byte  | 3 bytes | 4 bytes |
// +---------+---------+---------+---------+


// Structures in memory are stored in a contiguous block, with padding added to meet alignment requirements.
// Padding ensures that each member is properly aligned according to the system's architecture, which can lead to additional unused space within the structure.
// The total size of the structure is the sum of the sizes of its members plus any padding added by the compiler.