#include<stdio.h>

void good_morning();
void good_afternoon();
void good_night();

void good_morning(){
    printf("Good Morning!\n");
}
void good_evening(){
    printf("Good evening!\n");
}
void good_night(){
    printf("Good night!\n");
}


int main(){
    good_morning();
    good_evening();
    good_night();
    return 0;
}