// Calcius to Fahrenheit program

#include <stdio.h>

int main () {

    float C;
    float F;

    printf("Enter the value of celcius : ");
    scanf("%f", &C);

    F = (C*9.0/5.0)+32;

    printf("The value fahrenheit is %f\n", F);

    return 0;

}