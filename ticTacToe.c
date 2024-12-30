#include <stdio.h>

int main() {
    char board[3][3];
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &board[i][j]);  
        }
    }

  
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == 'X') {
                printf("X is the winner\n");
                return 0;
            } else if (board[i][0] == 'O') {
                printf("O is the winner\n");
                return 0;
            }
        }
    }


    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] == 'X') {
                printf("X is the winner\n");
                return 0;
            } else if (board[0][i] == 'O') {
                printf("O is the winner\n");
                return 0;
            }
        }
    }


    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'X') {
            printf("X is the winner\n");
            return 0;
        } else if (board[0][0] == 'O') {
            printf("O is the winner\n");
            return 0;
        }
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'X') {
            printf("X is the winner\n");
            return 0;
        } else if (board[0][2] == 'O') {
            printf("O is the winner\n");
            return 0;
        }
    }

    printf("Draw\n");

    return 0;
}
