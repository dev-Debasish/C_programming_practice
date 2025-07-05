/*
// q-2
#include<stdio.h>

int main(){
    int sub1,sub2,sub3;
    float totalMarks;
    //let assume that full marks of each subject is 100.
    printf("Enter the marks of sub1:");
    scanf("%d",&sub1);
    printf("Enter the marks of sub2:");
    scanf("%d",&sub2);
    printf("Enter the marks of sub3:");
    scanf("%d",&sub3);

    // for int to float type conversion we should devide them by a float that is (3.0) not only 3
    totalMarks = (sub1+sub2+sub3)/3.0;  

    printf("total marks:%0.2f\n",totalMarks);

    if((sub1>=33 && sub2>=33 && sub3>=33)&&totalMarks>=40) 
    {
        printf("you are passed the examination ");
    }
    else{
        printf("you fail the examination");
    }
    return 0;
}
*/

/*
// q-3
#include<stdio.h>

int main(){
    int income ;
    float tax = 0.0;
    printf("Enter your income:");
    scanf("%d",&income);
    if (income<250000)
    {
        tax = 0.0;
        printf("you don't have to pay any tax!\n");
    }
    else if (income>=250000 && income<500000)
    {
        tax = 0.05*(income-250000);
    }
    else if (income>=500000 && income<1000000)
    {
        tax = 0.20*(income-500000)+0.05*(income-250000);
    }
    else if (income>=1000000)
    {
        tax = 0.30*(income-1000000)+0.20*(income-500000)+0.05*(income-250000);
    }
    printf("your tax amount is:%0.2f",tax);
    return 0;
}
*/

/*
// q-4
#include<stdio.h>
 
 int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4 == 0  && year%100 != 0)|| (year % 400 == 0)){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
 }
*/

/*
 //q-5
#include<stdio.h>
 
 int main(){
    char alphabet ;
    printf("Enter a alphabet:");
    scanf("%c", &alphabet);
    printf("ASCII VALUE = %d\n",alphabet);
    if (alphabet>=97 && alphabet<=122){
        printf("this is a lowercase alphabet!\n");
    }
    else{
        printf("this is not a lowercase alphabet!\n");
    }
    return 0;
 }
*/


// Q-6
#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("%d(a) is the greatest number among the four!",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d(b) is the greatest number among the four!",b);
    }
    else if(c>b && c>a  && c>d){
        printf("%d(c) is the greatest number among the four!",c);
    }
    else{
        printf("%d(d) is the greatest number among the four!",d);
    }
    return 0;
}