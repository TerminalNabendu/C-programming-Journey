// Area of a ractangle

#include <stdio.h>
int main(){

    float area;
    float length;
    float width;

printf("Enter the length: ");
scanf("%f", &length);

printf("Enter the width: ");
scanf("%f", &width);

area=length*width;

printf("The area of the rectangle %f:", area);
return 0;
}