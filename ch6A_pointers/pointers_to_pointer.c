#include<stdio.h>

int main(){
    int i = 10;
    int* j = &i;
    int** k = &j;

/* 
    just like [j] is pointing to [i] And storing the address of the [i] .we can have another variable [k] which can store the addresss of [j].. as we have declear a variable [k] it also have the address.... to find out that we should define the another varible [L].....
      int*** L = &k;
    and so on.................................
     mostly {int*} and {int**} are used
*/

    printf("the address of J is %p\n",&j);
    printf("the address of J is %u\n",&j);
    printf("the address of J is %p\n",k);
    printf("the address of J is %u\n",k);

    printf("the value of J is %d\n",j);
    printf("the value of J is %d\n",*k);
    printf("the value of J is %d\n",*(&j));
//-------------------------------------------
    printf("the value of I is %d\n",i);
    printf("the value of I is %d\n",*j);
    printf("the value of I is %d\n",*(&i));
    printf("the value of I is %d\n",**k);
    printf("the value of I is %d\n",**(&j));
/* 
this is invalid as it requires the [unary '&'] operator but here we used [bitwise '&&']operator...
*/
    // printf("the value of I is %d\n",**(&&i));


    return 0;
}