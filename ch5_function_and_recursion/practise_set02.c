#include<stdio.h>

float c2f(int);

float c2f(int celcius){
    float fahrenhite = ((9*celcius)/5.0)+32;
    return fahrenhite;
}


int main(){
    int c = 37;
    float f = c2f(c);
    printf("%0.2f\n",f);

    return 0;
}