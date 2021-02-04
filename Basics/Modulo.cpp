#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int diceRoll=0;
	srand(time(NULL));
		diceRoll = 1 + rand()%6;
	cout<<"You rolled a "<< diceRoll;
}
