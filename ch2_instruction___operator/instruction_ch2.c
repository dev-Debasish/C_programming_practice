#include <stdio.h>
#include<math.h>

int main()
{
    /*
    // Type Decleartion Instruction --->
    int b;
    int i = 10;
    int j = i;
    int a = 2;
    int j1 = a+j-i;
    float a = 10.5;
    printf("%d",a);

    int a,b,c,d;
    a=b=c=d=30; // the value of a,b,c,d will be 30 each.

//     instruction.c: In function 'main':
// instruction.c:10:11: error: conflicting types for 'a'; have 'float'
//    10 |     float a = 10.5;
//       |           ^
// instruction.c:8:9: note: previous definition of 'a' with type 'int'
//     8 |     int a = 2;
//       |         ^
*/

    // Arithmetic Instruction
    int i = 3 * 2 + 1;
    int b = 3;
    int c = 2;
    int z;
    z = b * c;
    // b *c = z;
    // instruction.c: In function 'main':
    // instruction.c:33:10: error: lvalue required as left operand of assignment
    //     33 |     b *c = z;
    //        |          ^
    int k = 5 % 2;
    printf("%d\n",k);

    int o,p,m,n;
    m = o*p;
    // n = op;    // throws error

    // int g = 2**3;  // thats not valid on C 
    int g = pow(2,3);
    printf("%d",g);

    return 0;
}