#include <stdio.h>

int main() {
    int age = 16;

    if (age > 18) {
        printf("You can drive\n");
    } else {
        printf("You cannot drive\n"); // Executes when condition is false
    }

    return 0;
}