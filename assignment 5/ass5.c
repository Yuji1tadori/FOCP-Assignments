#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[]="XEBIA";
    char Yourchoice[]="_____";
    char guess;
    int tries=3;
    int length=strlen(word);
    int i,rightguess=0,wrongguess;

    printf("Let's start Hangman game!\n");
    printf("You have 3 tries to guess the word.\n");

    while(tries>0) {
        printf("\nThe word:%s\n",Yourchoice);
        printf("You have%dtries left.\n",tries);
        printf("Enter your choice:");
        scanf(" %c",&guess);
        guess=tolower(guess);
        wrongguess=1;
        for(i=0;i<length;i++) {
            if(tolower(word[i])==guess) {
                Yourchoice[i]=word[i];
                rightguess=1;
                wrongguess=0;
            }
        }
        if(wrongguess) {
            tries--;
            printf("Incorrect guess!\n");
        } else{
            printf("Correct guess!\n");
        }
        if (strcmp(word,Yourchoice)==0) {
            printf("\nNice guess! It's correct: %s\n",word);
            break;
        }
    }
    if (tries==0) {
        printf("\nYou lost! The word was: %s\n",word);
    }
    return 0;
}