#include<stdio.h>

int main(){
    int i=5;
    // it returns [5] as in post increment first {assighment} heppen then {increment} occur
    printf("%d\n",i++);// 5(output) then increment(6) 

    // it returns [7] as in pre increment first {increment} heppen then {assignment} occur
    printf("%d\n",++i);// [6+1=7]

    int j=3;
    printf("%d\n",j--);//3(2)
    printf("%d\n",--j);//1

    int k=7;
    printf("%d\n",++k);//8
    printf("%d\n",k++);//8(9)
    printf("%d\n",--k);//8
    printf("%d\n",k--);//8(7)

 // example vii try it another time !!!!
    int m=54;
    printf("%d\n",m++);//54(55)
    printf("%d\n",m--);//55(54)
    printf("%d\n",m++);//54(55)
    printf("%d\n",++m);//56
    printf("%d\n",m--);//56(55)
    printf("%d\n",m--);//55(54)
    printf("%d\n",--m);//53
    printf("%d\n",++m);//54
    printf("%d\n",++m);//55

    // compount assighment operator are ------ +=,-=,*=,/=,%=, ...etc
    
    return 0;
}