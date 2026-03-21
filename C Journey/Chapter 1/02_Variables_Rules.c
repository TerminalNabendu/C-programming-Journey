// 1.First character must be an alphabet or underscore (_)
// 2.No space are allowed.
// 3.no special symbol other than (_) allowed
// 4.variable names are case sensitive.

// *We must create meaningful variable names in our program. This enhances readability of our program.
// *Variables value can be changed


#include <stdio.h>


int main() {
    
    int age;
float salary;
char grade;
int _count;

int 1age;      // ❌ starts with number
int my age;    // ❌ space not allowed
int float;     // ❌ keyword used
int fish@shing; // Not allowed bcoz of the @

    return 0; 
}