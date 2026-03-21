// Simple Interest Program

#include <stdio.h>

int main() {

    float principal, rate, time, SI;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}