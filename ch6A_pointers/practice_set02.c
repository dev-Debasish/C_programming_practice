#include <stdio.h>

void address(int *);

void address(int *x) {
    printf("%p\n",/*(void*)*/x);
    // here the (&i) passes to the pointer (x).
}

int main() {
    int i = 10;
    printf("%p\n",/*(void*)*/&i);
    address(&i);
    return 0;
}
