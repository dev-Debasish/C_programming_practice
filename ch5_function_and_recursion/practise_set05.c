#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d\n", a, ++a, a++); // the precedence should be in right to left ...
    //5 5 3  .. but the  printing order should be the same..
    return 0;
}