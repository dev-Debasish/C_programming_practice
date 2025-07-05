#include <stdio.h>

float sum(float *, float *);
float sum(float *a, float *b)
{
    float *ptr;
    ptr = &s;
    float s = *a + *b;
    return s;
}

float average(float *, float *);
float average(float *x, float *y)
{
    float *ptr2;
    ptr2 = &avg;
    float avg = (*x + *y) / 2.0;
    return avg;
}

int main()
{
    float a = 4.0;
    float b = 6.0;
    printf("%.2f\n", sum(&a, &b));
    printf("%.2f\n", average(&a, &b));
    printf("%u",);
    return 0;
}