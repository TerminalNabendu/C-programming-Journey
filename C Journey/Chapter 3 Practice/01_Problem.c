#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11) // Remember that's not a==11,
     //(a=11) is a non 0 no. that means its true
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}