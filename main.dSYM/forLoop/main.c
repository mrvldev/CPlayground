#include <stdio.h>
#include <unistd.h>

int main(){

    // for loop =   Repeat some code a limited # of times
    //              for(Initialization; Condition; Update)

    for(int i = 10; i >= 0; i-=1){
        sleep(1);
        printf("%d\n", i);

    }

    printf("Happy New Year");

    return 0;
}