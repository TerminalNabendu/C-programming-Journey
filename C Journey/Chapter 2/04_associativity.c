//  | Priority | Operators |
//  | -------- | --------- |
//  | 1        | `* / %`   |
//  | 2        | `+ -`     |
//  | 3        | `=`       |

#include <stdio.h>

int main() {

    int x = 2, y = 3;
    int result = 3*x - 8*y;

    printf("Result = %d\n", result); // Result = -18

    //C does NOT follow school BODMAS exactly
    //It follows operator precedence table

    //When same priority operators exist:
    x*y/z // Evaluate as left to right

     int z = 3;

    int result1 = x * y / z;
    int result2 = x / y * z;

    printf("x*y/z = %d\n", result1); // x*y/z = 2
    printf("x/y*z = %d\n", result2); // x/y*z = 0

    //GOLDEN RULE (Always use brackets when confused)

    return 0;
}