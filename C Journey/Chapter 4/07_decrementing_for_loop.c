#include <stdio.h>

int main(){ 
    int n = 12;
    for (int i=n; i ; i--){  // don't make this mistake for(int i=10 ; i<=n ; i--) or u gonna start infinite loop
        printf("%d\n",i); 
    }
        
    return 0;
}