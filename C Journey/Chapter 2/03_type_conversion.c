#include <stdio.h>

int main()
{

    printf("5/2 = %d\n", 5 / 2);     //  5/2 → int/int → int → 2
    printf("5.0/2 = %f\n", 5.0 / 2); //  5.0/2 → float/int → float → 2.5
    printf("2/5 = %d\n", 2 / 5);     //  2/5 → int/int → int → 0
                                     //  float/float → float
    // Demotion
    int a = 3.5; // 3.5 → becomes 3 (decimal lost)

    // Promotion
    float a = 8; // 8 → becomes 8.0

    int k = 3.0 / 9;
    printf("k = %d\n", k); // k = 0
    // 3.0/9 = 0.333
    // But k is int → decimal removed → 0

    return 0;
}