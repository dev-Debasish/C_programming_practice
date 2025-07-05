#include<stdio.h>

struct vector{
    int i;
    int j;
};

int main(){
    struct vector v ;

    printf("Enter the value of i cap:");
    scanf("%d",&v.i);
    printf("Enter the value of j cap:");
    scanf("%d",&v.j);

    printf("2D VECTOR = %di + %dj\n",v.i,v.j);
    return 0;
}