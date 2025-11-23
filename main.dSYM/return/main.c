#include <stdio.h>

double cube(double num){
    return num * num * num;
}

double square(double num){
    return num * num;
}

int main(){

    // return = returns a value back to where you call a function

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}