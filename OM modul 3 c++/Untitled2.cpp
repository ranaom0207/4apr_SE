include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

    //defining my variables
    int getUserChoice, getComputerChoice;
   C
    char reply;

void determineWinner()
{
        //random computer choice
        getComputerChoice = rand() % 3;

        //displays the users input choice
        if (getUserChoice == 1)
         {
            cout << "You chose Rock." << endl;
         }

         else if (getUserChoice == 2)
        {
            cout << "You chose Paper." << endl;
        }

        else if (getUserChoice == 3)
        {
            cout << "You chose Scissors." << endl;
        }

        if (getUserChoice == 4)
        {
            cout << "You have chosen to exit the game. The game will now end.";
        }

        //display the computers input choice
        if (getComputerChoice == 1)
         {
            cout << "The computer chose Rock." << endl;
         }

         else if (getComputerChoice == 2)
        {
            cout << "The computer chose Paper." << endl;
        }

        else if (getComputerChoice == 3)
        {
            cout << "The computer chose Scissors." << endl;
        }

       //determines winner
        while (
                (getUserChoice == 2 && getComputerChoice == 3)||
                (getUserChoice == 3 && getComputerChoice == 1)||
                (getUserChoice == 1 && getComputerChoice == 2)
                )

            {
                cout << "I'm sorry, the computer has beat you." << endl << endl;
                break;
            }

        while (
                (getUserChoice == 1 && getComputerChoice == 3)||
                (getUserChoice == 2 && getComputerChoice == 1)||
                (getUserChoice == 3 && getComputerChoice == 2)
                )

            {
                cout << "Congratulations, you win!" << endl << endl;
                break;
            }

        while (
                (getUserChoice == getComputerChoice)
                )
            {
                cout << "This game is tied. " << endl << endl;
                break;
            }
}

int main()
{
    //displays a description of the game
    cout << "Rock, Paper, Scisscors Game!"  << endl << endl;
    cout << "You will be playing against the computer." << endl;
    cout << "Rock beats Scissors; Paper beats Rock; Scissors beats Paper." << endl << endl;
    cout << "------------------------------------------------------------------" << endl << endl;
    cout << "Please choose from the following" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Quit" << endl << endl;

    //loop sequence that allows player to play again if their input is not 4
    while (getUserChoice != 4)
    {
        // play begins
        cin >> reply;
        cout << endl;

        //assinging the numbers to getUserChoice
        switch (toupper(reply))
            {
                case '1':
                getUserChoice = 1;
                break;

                case '2':
                getUserChoice = 2;
                break;

                case '3':
                getUserChoice = 3;
                break;

                case '4':
                getUserChoice =4;
                break;
            }

    //calls the void function to display the winner
    determineWinner();

    }

    return 0;
