#include <stdio.h>

int main() {

    // Declare variables
    int age;
    float height;
    char grade;

    // Taking integer input
    printf("Enter your age: ");
    scanf("%d", &age);  
    // %d → format specifier for int
    // &age → address of variable (VERY IMPORTANT)

    // Taking float input
    printf("Enter your height: ");
    scanf("%f", &height);  
    // %f → format specifier for float

    // Taking character input
    printf("Enter your grade: ");
    scanf(" %c", &grade);  
    // space before %c is important to avoid newline issue

    // Displaying output
    printf("\n--- Your Details ---\n");
    printf("Age = %d\n", age);
    printf("Height = %.2f\n", height);
    printf("Grade = %c\n", grade);

    return 0;
}