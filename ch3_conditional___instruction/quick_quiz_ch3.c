#include<stdio.h>

int main(){
    char grade;
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);
    if (mark>=90 && mark<=100)      
    {
       grade = 'A';
    }
    else if(mark>=80 && mark<90){
        grade = 'B';
    }
    else if(mark>=70 && mark<80){
        grade = 'C';
    }
    else if(mark>=60 && mark<70){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    printf("your grade is %c",grade);
    return 0;
}