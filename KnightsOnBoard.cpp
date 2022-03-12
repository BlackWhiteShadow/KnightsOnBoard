/* 
KnightsOnBoard.cpp : Write a function that returns true if the knights are placed on a chessboard such that no knight can capture another knight. 
                    Here, 0s represent empty squares and 1s represent knights.
*/

#include <iostream>
#include <vector>

using namespace std;

bool cannotCapture(int board[8][8]) 
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i < 2 && j < 2)
            {
                if (board[i][j] == 1 && (board[i + 1][j + 2] == 1 || board[i + 2][j + 1] == 1))
                    return false;
            }
            else if (i > 6 && j > 6)
            {
                if (board[i][j] == 1 && (board[i - 1][j - 2] == 1 || board[i - 2][j - 1] == 1))
                    return false;
            }
            else
                if (board[i][j] == 1 && (board[i + 1][j + 2] == 1 || board[i + 2][j + 1] == 1 || board[i - 1][j - 2] == 1 || board[i - 2][j - 1] == 1))
                    return false;

        }
    }

    return true;
}

int main()
{
    int board[8][8]{
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {0, 0, 1, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1, 0, 1}
    };

    cout << cannotCapture(board);
}

