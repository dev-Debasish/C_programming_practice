//  // PASSSING STRUCTURE BY VALUE-->

// #include <stdio.h>

// // Define a structure called 'employee'
// struct employee {
//     int code;
//     float salary;
//     char name[20];
// };

// // Function that accepts a structure by value
// void displayEmployee(struct employee emp) {
//     printf("Employee Code: %d\n", emp.code);
//     printf("Employee Salary: %.2f\n", emp.salary);
//     printf("Employee Name: %s\n", emp.name);
// }

// int main() {
//     struct employee e1 = {101, 55000.50, "Debasish"};
    
//     // Pass the structure by value
//     displayEmployee(e1);

//     return 0;
// }





// //  PASSSING STRUCTURE BY REFERENCE

#include <stdio.h>
#include<string.h>

// Define a structure called 'employee'
struct employee {
    int code;
    float salary;
    char name[20];
};

// Function that accepts a structure by value
void displayEmployee(struct employee emp) {
    printf("Employee Code: %d\n", emp.code);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Employee Name: %s\n", emp.name);
}

// Function that accepts a pointer to a structure
void modifyEmployee(struct employee *emp){
    emp->code = 202;
    emp->salary = 65000.75;
    strcpy(emp->name,"bittu");
}


int main() {
    struct employee e1 = {101, 55000.50, "Debasish"};

    printf("Before modification:\n");
    // Pass the structure by value
    displayEmployee(e1);

    // Pass the structure by reference
    modifyEmployee(&e1);

    printf("\nAfter modification:\n");
    // Pass the structure by value
    displayEmployee(e1);

    return 0;
}


