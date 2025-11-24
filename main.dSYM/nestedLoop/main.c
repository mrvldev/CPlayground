#include <stdio.h>

int main(){

    
    

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows:");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int j=0; j < rows; j++){
        for(int i =0; i < columns; i++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}