#include <iostream>
#include "time.h"

using namespace std;

void main()
{
	// randomly generated time for computer 
	srand(time(0));
	// while loop to make the game run (GameRunning)
	bool GameRunning = true;
	while (GameRunning)
	{
		system("cls");

		// initializing min, max, guess, change & input
		int min = 1;
		int max = 100;
		int guess = rand() % 100 + 1;  
		int input;
		int change;
			while (GameRunning)
			{

				cout << " -----------------------------------------" << endl;
				cout << " |   Think of a number between 1 & 100   |" << endl;        // Header
				cout << " -----------------------------------------" << endl << endl;
				cout << " Is this your number? --->" << " " << guess << " " << "<--- " << endl << endl; //computer's guessing a rand number

				cout << " 1. Higher /\\ " << endl << endl; // asking for an iput of (1)
				cout << " 2. Lower  \\/" << endl << endl; // asking for an iput of (2)
				cout << " 3. Correct Number !" << endl;  // asking for an iput of (3)

				cin >> input;
				cin.clear();  // this clears the original input and resets input
				cin.ignore();

				switch (input)
				{
				case 1:                       //Computer is analyzing min by using an algorythm to determine that the number is higher than the original min
					system("cls");
					min = guess;
					change = min + max;
					guess = change / 2;
					break;

				case 2:                        //Computer is analyzing max by using an algorythm to determine that the numberis higher than the original max
					system("cls");
					max = guess;
					change = min + max;
					guess = change / 2;
					break;

				case 3:
					system("cls");
					char input; // initializing input for (y) & (n)

					cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
					cout << "|               HOORAY! THE COMPUTER WINS!!!           |" << endl;
					cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl << endl;
					cout << "    Would you like to continue playing, (y) or (n)?    " << endl;
					cin >> input;

					if (input == 'n')
					{
						GameRunning = false;	// option that allows to end the game
					}
					if (input == 'y')
					{
						GameRunning = true;    // restarts game again
					}
					else
						cout << "Mororn! That in not an option!" << endl; //Resets game if invalid option
						system("pause");
						GameRunning = true;
						system("cls");
						break;
   	
					default:
						cout << "Oops! That in not an option! Lets try again!" << endl;    //Resets game if invalid option
						system("pause");
						GameRunning = true;
				}
		}
			}
			
}