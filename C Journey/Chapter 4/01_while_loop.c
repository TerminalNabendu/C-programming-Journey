#include <stdio.h>

int main()
{
    int i = 0; // loop counter initialization

    while (i < 10)
    { // condition check (runs while true)
        printf("Value of i = %d\n", i);

        i++; // IMPORTANT: increment to avoid infinite loop
        //(i = i + 1)
    }
    // The moment i reaches 10 loop terminates
    return 0;
}