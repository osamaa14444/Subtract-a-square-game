#include <iostream>
#include<cmath>
using namespace std;
// Program: Subtract a square The player who removes the last coin wins.
// Author: Oussama Mohamed Bay
// Version: 1.0v
// Date: 2023/3/3

//==========================================================================================

/*Subtract a square.This is a two - player mathematical game of strategy.It is played by two
people with a pile of coins(or other tokens) between them.The players take turns removing
coins from the pile, always removing a non - zero square number of coins(1, 4, 9, 16, …).
The player who removes the last coin wins.*/

//===========================================================================================


//calculates the square root of the input.

bool squarenum(int perfect) {
	int numb = sqrt(perfect);
	return (numb * numb == perfect);
}
// line declares aguncton named the_game taht takes 3 parameters.
void the_game(int remainder, const string& player1, const string& player2) {
	bool player = true;
	while (remainder > 0) {
		cout << "\nthe reminder coins are:" << remainder << endl;
//int variable coins_taken woll stor the number of coins aplayer takes in a given turn.

		int coins_taken = 0;
		do {
			cout <<"player " << (player ? player1 : player2) << "  enter your number : " << endl;
			cin >> coins_taken;

		} while (!squarenum(coins_taken) || coins_taken > remainder); 
			remainder -= coins_taken;
			player = !player;
		}
		cout << (player ? player2 : player1) << "  is the winner" << endl;

}

int main() {
	int b;
	string player1, player2, again;
	do {
		cout << "\nSubtract a square. This is a two-player mathematical game of strategy. It is played by two";
		cout << "people with a pile of coins (or other tokens) between them. The players take turns removing";
		cout << "coins from the pile, always removing a non - zero square number of coins(1, 4, 9, 16, …).";
		cout << "The player who removes the last coin wins.\n";
		cout << "\nWelcome to the smart game" << endl;

		cout << "\nplease enter the maximum number of coins :";
		cin >> b;

		cout << "player 1 write your name : ";
		cin >> player1;

		cout << "player 2 write your name :";
		cin >> player2;

		// Start the game
		the_game(b, player1, player2);
		//It asks the user if he wants to replay the game or not.

		cout << "do you want to playe agen ? (y/n) ";
		cin >> again;
	} while (again == "yes" || again == "y");

		cout << "\n<<<<<<<<<< end the game Thanks   >>>>>>>>>>" << endl;

		return 0;
}
