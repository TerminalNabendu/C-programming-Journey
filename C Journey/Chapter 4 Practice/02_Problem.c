#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 10; i; i--) //i = 0  → false → loop stops
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}