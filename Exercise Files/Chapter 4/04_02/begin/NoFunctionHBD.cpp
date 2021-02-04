//Happy Birthday to demonstrate functions
//by Erin Colvin
//It's not really my birthday :)
#include <iostream>
using namespace std;

void printHBD();
void hbdUser(string user);
string name;
int main()
{
	cout << "What is your name?";
	cin >> name;
	printHBD();
	printHBD();
	hbdUser(name);
	printHBD();
	return 0;
}

void printHBD()
{
	cout << "Happy Birthday to you\n";
}

void hbdUser(string user)
{
	cout << "Happy Birthday dear " << user << endl;
}
