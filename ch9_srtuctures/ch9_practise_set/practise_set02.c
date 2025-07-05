// #include<stdio.h>

// struct vector{
//     int i;
//     int j;
// };

// int main(){
//     struct vector v1,v2 ;

//     printf("Enter the first vector i cap value:");
//     scanf("%d",&v1.i);
//     printf("Enter the first vector j cap value:");
//     scanf("%d",&v1.j);

//     printf("Enter the second vector i cap value:");
//     scanf("%d",&v2.i);
//     printf("Enter the second vector j cap value:");
//     scanf("%d",&v2.j);


//     printf("The sum of the 2D VECTORS are  = %di + %dj\n",v1.i+v2.i,v1.j+v2.j);
//     return 0;
// }


// USING FUNCTION --->
#include<stdio.h>

struct vector{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3 = {v1.i+v2.i,v1.j+v2.j};
    return v3;
}

int main(){
    struct vector v1 = {4,5};
    struct vector v2 = {8,7};
    struct vector v = sumVector(v1,v2);

    printf("The sum of the 2D VECTOR are = %di + %dj\n",v.i,v.j);

    return 0;
}