#include<stdio.h>

float average(int ,int,int);

float average(int x,int y,int z){
    float m = (x+y+z)/3.0;
    return m;
}

int main(){
    int a = 10;
    int b = 52;
    int c = 32;
    printf("%f\n",average(a,b,c));
    return 0;
}