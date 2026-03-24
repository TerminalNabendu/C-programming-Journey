#include <stdio.h>

int main()
{
    int num = 1;

    switch (num)
    {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
    }

    return 0;
}

// Note -> We can use switch-case statements even by writing cases in any order of our
// choice (not necessarily ascending).
//      -> char values are allowed as they can be easily evaluated to an integer
//      ->A switch can occur within another but in practice this is rarely done.