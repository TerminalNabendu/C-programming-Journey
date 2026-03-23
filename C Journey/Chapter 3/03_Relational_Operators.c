// Relational operators are used to evaluate conditions (true or false) inside the if statements.
// " == " -> equals to
// " >= " -> greater than equals to
// " != " -> not equals to

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (a == b) {
        printf("Equal\n");
    }

    if (a != b) {
        printf("Not Equal\n");
    }

    if (a < b) {
        printf("a is smaller\n");
    }

    return 0;
}