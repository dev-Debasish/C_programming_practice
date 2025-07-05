#include <stdio.h>

void print_pointer_address(void *ptr) {
    printf("Pointer address: %p\n", ptr);
}

int main() {
    int i = 10;
    print_pointer_address(&i);  // Pass the address of i (int*) as void*
    return 0;
}


/*
The void* type in C is a generic pointer type that can point to any data type. When dealing with pointer arithmetic, function parameters, or printf formatting, using void* can be useful for the following reasons:

1. Generic Pointer Type:
A void* pointer is a pointer that can hold the address of any data type. This is useful when you need to write functions that can work with pointers to different data types.
*/