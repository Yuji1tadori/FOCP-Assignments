//pascal's triangle

#include <stdio.h>

int main() {
    int row;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    int triangle[row][row];

    for (int i = 0; i < row; i++) {

        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < row; i++) {

        for (int j = 1; j <= row - i; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }

        printf("\n");
    }

    return 0;
}