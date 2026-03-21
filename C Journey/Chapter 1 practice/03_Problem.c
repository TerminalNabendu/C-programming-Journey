// Volume of cylinder

#include <stdio.h>
int main() {

    // 2 ways
    // first way

    float radius;
    float height;
    const double pi = 3.14159265359;
    double volume;

    printf("Enter the value of Radius : ");
    scanf("%f", &radius);

    printf("Enter the value of Height : ");
    scanf("%f", &height);

    volume = pi*radius*radius*height;

    printf("Volume of the cylinder is %lf\n", volume);

    // second way

    radius = 6;
    height = 8;

    printf("The volume of the cylinder with radius %f and height %f is %lf", radius, height, 3.14159265359*radius*radius*height);

    return 0;

}