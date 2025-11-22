#include <stdio.h>

int main() {
    // Temperature conversion program

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahenrheit to Celsius\n");
    printf("Is the tem in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if(choice == 'C'){
        // C to F
        printf("Enter the temperatur in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C to F
        printf("%.1f Celsius are %.1f Fahrenheit.\n", celsius, fahrenheit);

    }
    else if(choice == 'F'){
        //F to C
        printf("Enter the temperatur in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit -32) * 5 / 9; // F to C
        printf("%.1f Fahrenheit are %.1f Celsius.\n", fahrenheit, celsius);
    }
    else{
        printf("Invalid choice! Please selcet C or F\n");
    }
    return 0;
}