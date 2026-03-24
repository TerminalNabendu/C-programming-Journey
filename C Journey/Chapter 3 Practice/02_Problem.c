#include <stdio.h>
int main()
{

    int A, B, C, average;

    printf("Enter marks of subject A: ");
    scanf("%d", &A);

    printf("Enter marks of subject B: ");
    scanf("%d", &B);

    printf("Enter marks of subject C: ");
    scanf("%d", &C);

     average = (A + B + C)/3;

    if (marks >= 40  && A >=33 && B >= 33 && C >= 33)
    {
        printf("You are passed");
    }
    else
    {
        printf("you are failed");
    }

    return 0;
}