#include<stdio.h>

int main()
{
    // int horizontalSide = 10;
    // int verticalSide = 10;
    // int area = horizontalSide * verticalSide;
    // printf("the area of a rectangle=%d",area);
    // return 0;

    // int a,b;
    // int area;
    // printf("Enter the horizontal side(a) of the rectangle:");
    // scanf("%d",&a);
    // printf("Enter the vertical side(b) of the rectangle:");
    // scanf("%d",&b);
    // area = a*b;
    // printf("the area of the rectangle is=%d",area);
    // return 0;


    // float circleArea;
    // int radius,height;
    // float cylinderVolume;
    // printf("Enter the radius of the circle:");
    // scanf("%d",&radius);
    // printf("Enter the height of the cylinder:");
    // scanf("%d",&height);
    // circleArea = 3.14*radius*radius;
    // cylinderVolume = circleArea*height;
    // printf("The area of the circle:%.2f\n",circleArea);
    // printf("The volume of the cylinder:%.2f",cylinderVolume);
    // return 0;

    
    // float farenhite;
    // float celcius;
    // printf("Enter the temperature on celcius:");
    // scanf("%f",&celcius);
    // farenhite = (9*celcius/5) + 32;
    // printf("the temperature on farenhite is:%.2f",farenhite);
    // return 0;


    float simpleInterest,principalAmount,interestRate,time;
    printf("Enter the principal amount:\n");
    scanf("%f",&principalAmount);
    printf("Enter the rate of interest:\n");
    scanf("%f",&interestRate);
    printf("Enter the no. of years:\n");
    scanf("%f",&time);
    simpleInterest = (principalAmount*interestRate*time)/100;
    printf("the simpleInterest=%.2f",simpleInterest);
    return 0;
    
}