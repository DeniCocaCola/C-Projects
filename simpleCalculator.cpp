/*
	Author: @DeniCocaCola
	Class: IST163
	Project Summary: A program that mimics a calculator. The program should take 
		as input two integers and the operation to be performed. 
		It should then output the numbers, the operator, and the result. 
		For division, if the denominator is zero, output an appropriate message.

*/

#include <iostream>
using namespace std;

int main() {
	double  intOne    = 0.0;
	double  intTwo    = 0.0;
	double  finalInt  = 0.0;
	char	probState = 0;
	

	cout << "Enter first integer: ";
	cin >> intOne;
	cout << endl;

	cout << "Enter problem sign: ";
	cin >> probState;
	cout << endl;

	cout << "Enter second integer: ";
	cin >> intTwo;
	cout << endl;

	if (probState == '*') 
	{
		finalInt = intOne * intTwo;
		cout << "Final Answer: " << intOne << probState << intTwo << " = " << finalInt << endl;
	}


	else if (probState == '/')
	{
		if (intTwo == 0) {
			cout << "Final Answer: Black hole forming. --ABORTING--" << endl;
		}
		else	{
			finalInt = intOne / intTwo;
			cout << "Final Answer: " << intOne << probState << intTwo << " = " << finalInt << endl;
		}
	}


	else if (probState == '+') 
	{
		finalInt = intOne + intTwo;
		cout << "Final Answer: " << intOne << probState << intTwo << " = " << finalInt << endl;
	}


	else if (probState == '-')
	{
		finalInt = intOne - intTwo;
		cout << "Final Answer: " << intOne << probState << intTwo << " = " << finalInt << endl;
	}
	

	system("pause");

		return 0;
	
	
}

