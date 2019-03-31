/*
AUTHOR: @DeniCocaCola
SUMMARY: Generate 5 random numbers, space with endlines, press any key to exit

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()	{
	srand(time(0));

	int inPUT = 0;
	cout << ((rand() % 99) + 1) << endl;
	cout << ((rand() % 99) + 1) << endl;
	cout << ((rand() % 99) + 1) << endl;
	cout << ((rand() % 99) + 1) << endl;
	cout << ((rand() % 99) + 1) << endl;
	cout << "Press Any Key and Enter to Exit." << endl;
	cin >> inPUT;
	cout << inPUT;
	

	
	return 0;






}