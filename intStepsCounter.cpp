/*

AUTHOR: @DeniCocaCola
SUMMARY: Suppose that the first number of a sequence is x, in which x is an integer. 
	Define a_0=x;a_(n+1)=a_n/2 if a_n is even and a_(n+1)=3(a_n+1) if a_n is odd. 
	Then, there exists an integer k such that a_k=1. Write a program that prompts the user to input the value of x. 
	The program outputs the integer k such that a_k=1 and the numbers a_0,a_1,…a_k. 

*/


#include <iostream>

using namespace std;

int main() 

{

	int intA = 0; //Input
	int intK = 0; //Steps

	//---------------------
	cout << "Input Integer: ";
	cin >> intA;
	cout << intA << " ";
		

	//---------------------
	if (intA < 0) { //Checks for a negative number. Can't get to 1 from negative.
		cout << "is a negative number. Please use a positive integer." << endl;

	}

	else if (intA == 0) { //Running 0 through the process would result in an infinite loop.
		cout << "cannot be used. Please use an integer greater than 0.";
	}


	//---------------------
	else if (intA > 1)
	{
	

		while (intA != 1) //Loops while intA does not equal 1.
		{
			if (intA % 2 != 0)
			{
				//Odd
				intA = 3 * intA + 1;
				cout << intA << " ";
				intK = intK + 1;       //Adds 1 to the amount of steps. 
			}

			//---------------------

			else if (intA % 2 == 0)
			{
				//Even
				intA = intA / 2;
				cout << intA << " ";
				intK = intK + 1;  //Adds 1 to the amount of steps.
			}
		}
	}
	


	



	//---------------------
	cout << "Total Steps (k) = " << intK << endl; //Prints out total steps.
	system("pause");
	return 0;



}