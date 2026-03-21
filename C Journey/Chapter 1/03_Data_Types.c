#include <stdio.h>

int main() {
    
    // "Integer" type
    int age = 20;
    // int age;
    // age = 20;

    // "Float" type
    float height = 5.8;

    // "Double" type (more precision than float)
    double pi = 3.1415926535;

    // Character type
    char grade = 'A'; // character must be placed inside single quotes (' ')

    // Printing values
    printf("Integer (age): %d\n", age);
    printf("Float (height): %.1f\n", height);
    printf("Double (pi): %lf\n", pi);
    printf("Character (grade): %c\n", grade);

    return 0;
}