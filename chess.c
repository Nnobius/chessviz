#include <stdio.h>

int main()
{
    int i,j;

    char chess[8][8] = {
        "RNBQKBNR",
        "PPPPPPPP",
        "________",
        "________",
        "________",
        "________",
        "pppppppp",
        "rnbqkbnr",
    };

    printf("\n");

    for (i = 0; i < 8; i++){
        for (j = 0; j < 8; j++){
            printf("%c", chess[i][j]);
            }
        printf("\n");
    }

    printf("\n");

    return 0;
}