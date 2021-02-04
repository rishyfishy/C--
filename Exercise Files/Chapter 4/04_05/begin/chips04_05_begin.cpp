#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const float MAX_TURN_RATIO = .5;
const int MAX_CHIPS = 100;
string getName(string[], bool);
int maxPerTurn(int, float);
int askMove(string[], bool, int);
void greeting(string[]);

int main()
{
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	string playerNames[2];

	//seed the random number generator
	srand(static_cast<int>(time(0)));

	//ask the players for their names, then store in an array
	greeting(playerNames);

	//start the game with a random number of chips in the pile
	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";

	while (gameOver == false)
	{
		//Player takes chips
		chipsTaken = askMove(playerNames, player1Turn, chipsInPile);

		//Pile therefore loses that many chips
		chipsInPile -= chipsTaken;
		cout << "There are " << chipsInPile << " left in the pile\n";
		player1Turn = !player1Turn;

		//Evaluates whether the game is over (no chips left) and congratulates winner
		if (chipsInPile == 0)
		{
			gameOver = true;
			cout << getName(playerNames, player1Turn) << ", congratulations you won\n";
		}
	}

	return 0;
}

// Finds the name of the player whose turn it currently is
string getName(string playernames[], bool turn)
{
	if (turn)
	{
		return playernames[0];
	}

	return playernames[1];
}
// Asks the players their names and greets them
void greeting(string nameList[])
{
	cout << "Welcome to Chips\n";
	cout << "Player 1, please enter your name: ";
	cin >> nameList[0];
	cout << "\nThanks and good luck!" << endl
		 << "Player 2, please enter your name: ";
	cin >> nameList[1];
	cout << "\nThanks and good luck! \n";
}
// Calculates the max number of chips a player can take
int maxPerTurn(int pile, float ratio)
{
	int max = static_cast<int>(pile * ratio);

	if (max == 0)
	{
		return 1;
	}

	return max;
}
// Asks the current player how many chips they want to remove, returns that value if valid
int askMove(string nameList[], bool turn, int chipsLeft)
{
	int max = maxPerTurn(chipsLeft, MAX_TURN_RATIO);
	int chipsTaken;
	do
	{
		cout << getName(nameList, turn) << " How many chips would  you like?\n"
			 << "You can take up to " << max << endl;

		cin >> chipsTaken;
	} while ((chipsTaken > max) || (chipsTaken <= 0));

	return chipsTaken;
}