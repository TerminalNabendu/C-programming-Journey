#include <stdio.h>

int main(){ 
    int n = 12;
     // start from n, go till > 0, decrease each time
    for (int i=n; i ; i--){  // don't make this mistake for(int i=10 ; i<=n ; i--) or u gonna start infinite loop
        printf("%d\n",i); 
    }
        
    return 0;
}