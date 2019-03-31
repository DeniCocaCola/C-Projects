/*
Project by: @DeniCocaCola
Summary: A program that prompts the user to input a number of quarters, nickels, and dimes. The program then outputs the total
amount of the coins in cents.

*/

#include <iostream>

using namespace std;
int main()
{
	int numAmount       = 0;
	int numNickelCount  = 0;
	int numQuarterCount = 0;
	int numDimeCount    = 0;
	int numPennyCount   = 0;

	int numNickleFinal  = 0;
	int numQuarterFinal = 0;
	int numDimeFinal    = 0;
	int numPennyFinal   = 0;
	int numFinal        = 0;

	cout << "Enter total amount of Nickels: ";
	cin >> numNickelCount;
	cout << endl;
	cout << "Enter total amount of Quarters: ";
	cin >> numQuarterCount;
	cout << endl;
	cout << "Enter total amount of Dimes: ";
	cin >> numDimeCount;
	cout << endl;
	cout << "Enter total amount of Pennies: ";
	cin >> numPennyCount;
	cout << endl;

	numNickleFinal  = 5  * numNickelCount;
	numQuarterFinal = 25 * numQuarterCount;
	numDimeFinal    = 10 * numDimeCount;
	numPennyFinal   = 1  * numPennyCount;
	numFinal        = numNickleFinal + numQuarterFinal + numDimeFinal + numPennyFinal;

	cout << "Total amount in Nickels: " << numNickleFinal << endl;
	cout << "Total amount in Quarters: " << numQuarterFinal << endl;
	cout << "Total amount in Dimes: " << numDimeFinal << endl;
	cout << "Total amount in Pennies: " << numPennyFinal << endl;
	cout << "Total amount of Cents: " << numFinal << endl;

	_sleep(9999999);
	return 0;

}


