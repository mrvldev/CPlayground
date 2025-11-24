#include <stdio.h>

int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y){
    int result = x + y;
    return result;
}

int substract(int x, int y){
    int result = x - y;
    return result;

}

int main(){

    //variable scope = Refers to where a variable is recognized ann accessible.
    //                  Variables can share the same name if
    //                  they´re in different scopes {}

    int x = 5;
    int y = 6;

    int result = substract(x, y);

    printf("%d", result);

    return 0;
}