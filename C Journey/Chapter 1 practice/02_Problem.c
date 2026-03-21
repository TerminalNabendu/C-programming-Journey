// Calculating the area of a circle

#include <stdio.h>

int main () {

    float radius;
    const double pi = 3.141592653589793;
    double area;

    printf("Enter the value of radius : ");
    scanf("%f", &radius);

    area = radius*radius*pi;

    printf("Area of circle = %lf", area);

    return 0;

}