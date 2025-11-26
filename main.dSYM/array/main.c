#include <stdio.h>

int main(){

    // array=   A fixed-size collection of elements of the same data type 
    //          (Similar to variable, but it holds more then 1 value)

    int numbers[] = {10, 20 , 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Mike";

    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
 
    int size = sizeof(numbers / sizeof(numbers[0]));


    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }


    return 0;
}