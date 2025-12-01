#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"What is the largest Planet in the solar system?",
                            "What is the hottest Planet",
                            "What planet have the most moons?",
                            "Is the earth flat"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD.Neptune",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                            "A. Yes\nB. No\nC. Maybe\nD.Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions)  / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);


        if(guess == answerKey[i]){
            printf("CORRECT\n");
            score++;
        }
        else{
            printf("WRONG!\n");
            printf("The right answer is %c.\n", answerKey[i]);

        }
        

        }
    printf("Your score is %d out of %d points.", score, questionCount);



    return 0;
}