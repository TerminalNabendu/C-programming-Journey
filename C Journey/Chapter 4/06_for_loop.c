#include <stdio.h>
int main(){

int n;
printf("Enter n: ");
scanf("%d\n", &n);

//// initialization ; condition ; update
for(int i = 1; i<=n; i++){    //for (start; condition; change)

printf("%d\n", i);
}
    return 0;
}