// I'm too lazy so I will manually input the starting positions
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int numberofrolls = 0;
    int player1score = 0;
    int player1position = 3; // Starting position is 3
    int player2score = 0;
    int player2position = 5; // Starting position is 5
    int boardposition = 0;

    int incrdice = 1;

    while (player1score < 1000 && player2score < 1000)
    {
        if (numberofrolls % 2 == 0)
        {
            // Player 1 goes
            for (int i = 3; i > 0; i--)
            { // Iterates over 3 rolls
                player1position += incrdice;
                while (player1position > 10)
                {
                    player1position -= 10;
                }
                incrdice++;
                numberofrolls++;
            }
            player1score += player1position;
        }
        else
        {
            // Player 2 goes
            for (int i = 3; i > 0; i--)
            { // Iterates over 3 rolls
                player2position += incrdice;
                while (player2position > 10)
                {
                    player2position -= 10;
                }
                incrdice++;
                numberofrolls++;
            }
            player2score += player2position;
        }
    }
    cout << player1score << endl;
    cout << player2score << endl;
    cout << numberofrolls << endl;
    return 0;
}