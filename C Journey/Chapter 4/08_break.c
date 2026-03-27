#include <stdio.h>
int main(){

for(int i=0 ; i<100 ; i++){

    printf("%d\n", i);
    if(i==5){      // break; // exit the loop now!
        break;
    }
}

    return 0;
}