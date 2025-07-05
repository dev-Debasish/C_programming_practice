// this code doesn't change the value before and after the function call as this is called by value and we also use the void return type here .

#include<stdio.h>

void ten_times(int );

void ten_times(int a){
    a = (a * 10);
}

int main(){
    int x = 10;
    printf("%d\n",x);
    ten_times(x);
    printf("%d\n",x);
    return 0;
}


// but for this code it uses the int return type and we also use a integer in the main function to change the value ..


#include<stdio.h>

int multiply_ten_times(int );

int multiply_ten_times(int x){
    return (x*10);
}

int main(){
    int i = 45;
    int c = multiply_ten_times(i);
    printf("%d\n",c);
    return 0;
}