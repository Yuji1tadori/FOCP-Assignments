#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice,computerChoice;
    printf("Let's begin with the rock paper sissor game\n");
    printf("Choose the Option\n");
    printf("1.Rock\n");
    printf("2.Paper\n");
    printf("3.Scissors\n");

    printf("Enter your choice (1,2,or 3):");
    scanf("%d",&userChoice);

    if (userChoice<1||userChoice>3) {
        printf("not valid\n");
        return 1;
    }
    srand(time(NULL));

    computerChoice=rand()%101; 

    if(computerChoice>=0&&computerChoice<=33) {
        computerChoice=1;
    } else if (computerChoice>=34&&computerChoice<=66) {
        computerChoice=2;
    } else{
        computerChoice=3;
    }

    printf("\nYour choice:");
    if (userChoice==1)printf("Rock(Stone)\n");
    else if(userChoice==2)printf("Paper\n");
    else printf("Scissors\n");

    printf("Computer's choice:");
    if (computerChoice==1)printf("Rock (Stone)\n");
    else if(computerChoice==2) printf("Paper\n");
    else printf("Scissors\n");

    if (userChoice==computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice==1&&computerChoice==2) || 
               (userChoice==2&&computerChoice==3) || 
               (userChoice==3&&computerChoice==1)) {
        printf("Computer wins!\n");
    } else {
        printf("You win!\n");
    }

    return 0;
}