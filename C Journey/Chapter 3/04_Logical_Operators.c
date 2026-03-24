// Logical operators are used when you have multiple conditions.
// There are 3 types:
// 1. && -> AND
// 2. || -> OR
// 3. ! -> NOT

#include <stdio.h>

int main()
{
    int age = 19;
    int hasID = 1; // 1 = YES, 0 = NO

    // BOTH conditions must be true
    if (age >= 18 && hasID == 1)
    {
        printf("Entry Allowed\n");
    }
    else
    {
        printf("Entry Denied\n");
    }

    int isStudent = 0;
    int hasCoupon = 1;

    // Only ONE condition needs to be true
    if (isStudent == 1 || hasCoupon == 1)
    {
        printf("Discount Applied\n");
    }
    else
    {
        printf("No Discount\n");
    }

    int isBanned = 0; // 0 means NOT banned

    // ! reverses the condition
    if (!isBanned)
    {
        printf("Login Allowed\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    int isSubscribed = 1;
    int loggedIn = 1;
    int isAdmin = 0;

    // Complex condition using AND + OR
    if ((isSubscribed == 1 && loggedIn == 1) || isAdmin == 1)
    {
        printf("Access Granted\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    return 0;
}