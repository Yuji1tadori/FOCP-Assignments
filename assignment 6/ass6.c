#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];

void resetboard();
void printboard();
int freespaces();
void player();
void comp();
char gwinner();


int main(){

    char winner= ' ';

    resetboard();

    while(winner == ' ' && freespaces() != 0 ){
    printboard();
    player();
    winner = gwinner();
    if(winner != ' ' && freespaces() == 0){
        break;
    }
    
        

    comp();
    winner = gwinner();
    if(winner != ' ' && freespaces() == 0){
        break;
    }

    }

    printboard();
    if (winner=='X')
    printf("CONGRATULATIONS YOUVE WON !! ");

    else if (winner == 'O'){
        printf("OOPS BETTER LUCK NEXT TIME");
    }

    else{
        printf("DRAW");
    }

    return 0;

}

void resetboard(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j] = ' ';
        }
    }

}
void printboard(){

    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);

    printf("\n---|---|---\n");

    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);

    printf("\n---|---|---\n");
    
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);

    printf("\n---|---|---\n");

}
int freespaces(){

    int i,j,freesp =9;

    for(i=0;i<3;i++){

        for(j=0;j<3;i++){

            if(board[i][j] != ' ')
            freesp--;
        }
    }
    return freesp;
}
void player(){
    int row,col;

    while(board[row][col] != ' '){
    printf("Enter the row number \n 1 \t\t 2 \t\t 3\n Your choice : ");
    scanf("%d",&row);
    row--;

    printf("Enter the column number \n 1 \t\t 2 \t\t 3\n Your choice : ");
    scanf("%d",&col);
    col--;

    if(board[row][col]==' '){
        board[row][col]= 'X';
        break;
    }

    else{
        printf("invalid move! \n");
    }

}

    
}
void comp(){

    srand(time(NULL));
    int row ,col;

    if(freespaces() > 0){
        while(board[row][col] != ' '){
            row=rand()%3;
            col=rand()%3;
        }
        board[row][col]='O';
    }
}
char gwinner(){
    int i;
    for(i=0;i<3;i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]) //rows
        return board[i][0];

        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]) //columns
        return board[0][i];

        if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) //diagonal 1
        return board[0][0];

        if(board[0][2] == board[1][1] && board[0][2] == board[2][0]) //diagonal 2
        return board[0][2];

    }

    return ' ';

}