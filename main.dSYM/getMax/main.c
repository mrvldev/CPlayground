#include <stdio.h>

int getMax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    int max = getMax(10, 5);

    printf("The max number is %d", max);


    return 0;
}