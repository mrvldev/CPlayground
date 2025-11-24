#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // für sleep()

int main() {
    int gesamtSekunden;

    printf("Timer (in Sekunden) eingeben: ");
    scanf("%d", &gesamtSekunden);

    printf("Timer gestartet für %02d:%02d:%02d...\n",
           gesamtSekunden/3600,
           (gesamtSekunden%3600)/60,
           gesamtSekunden%60);

    while (gesamtSekunden > 0) {
        int stunden = gesamtSekunden / 3600;
        int minuten = (gesamtSekunden % 3600) / 60;
        int sekunden = gesamtSekunden % 60;

        printf("\r%02d:%02d:%02d", stunden, minuten, sekunden);
        fflush(stdout); // aktualisiert die Zeile sofort
        sleep(1);
        gesamtSekunden--;
    }

    // Ton abspielen
    printf("\n");
    system("afplay /System/Library/Sounds/Glass.aiff");

    printf("Zeit abgelaufen!\n");

    return 0;
}
