#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double sin_x(double x) {
    double result = 0.0;
    int sign = 1;
    for (int n = 1; n <= 10; n++) {
        result += sign * pow(x, 2 * n - 1) / factorial(2 * n - 1);
        sign *= -1;
    }
    return result;
}

double cos_x(double x) {
    double result = 1.0;
    int sign = -1;
    for (int n = 1; n <= 10; n++) {
        result += sign * pow(x, 2 * n) / factorial(2 * n);
        sign *= -1;
    }
    return result;
}

double exp_x(double x) {
    double result = 1.0;
    for (int n = 1; n <= 10; n++) {
        result += pow(x, n) / factorial(n);
    }
    return result;
}

int main() {
    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("sin(%.2lf) = %.6lf\n", x, sin_x(x));
    printf("cos(%.2lf) = %.6lf\n", x, cos_x(x));
    printf("e^%.2lf = %.6lf\n", x, exp_x(x));

    return 0;
}