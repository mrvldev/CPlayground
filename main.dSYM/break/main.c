#include <stdio.h>

int main(){

    // break = Break out of a loop(STOP)
    // contionue = Skip current cycle of a loop (SKIP)

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue;
        }

        printf("%d\n", i);

    }

    return 0;
}