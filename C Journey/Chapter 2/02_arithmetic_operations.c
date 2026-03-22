#include <stdio.h>

int main()
{

    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // 10 / 3 = 3 (NOT 3.33) → because both are int
    // 10 % 3 = 1 → remainder

    int z;
    b * 5 = z; // invalid because left side must be a variable, not expression
    z = b * 5; // valid

    printf("%d", 5 % 2);   // 1
    printf("%d", -5 % 2);  // -1 Sign follows numerator (left side)
    //5 % -2 = 1
    //-5 % -2 = -1

    float x = 5.5 % 2; // ERROR Because the % (modulus operator) only works with integers, not with floating-point numbers.

    return 0;
}