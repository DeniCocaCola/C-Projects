/*
AUTHOR: @DeniCocaCola
SUMMARY: Determine the average test score between 5 scores

*/




#include <iostream>
using namespace std;

int main()	{
	double scoreOne   = 0.0;
	double scoreTwo   = 0.0;
	double scoreThree = 0.0;
	double scoreFour  = 0.0;
	double scoreFive  = 0.0;
	double scoreAvg   = 0.0;

	cout << "Enter Test Score: ";
	cin >> scoreOne;
	cout << endl;

	cout << "Enter Test Score: ";
	cin >> scoreTwo;
	cout << endl;

	cout << "Enter Test Score: ";
	cin >> scoreThree;
	cout << endl;

	cout << "Enter Test Score: ";
	cin >> scoreFour;
	cout << endl;

	cout << "Enter Test Score: ";
	cin >> scoreFive;
	cout << endl;

	scoreAvg = (scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive) / 5;
	cout << "Average test score: " << scoreAvg << endl;

	system("pause");

	return 0;

}


