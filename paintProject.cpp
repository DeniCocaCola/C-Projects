/*
AUTHORL @DeniCocaCola
SUMMARY:
	A room has one door, two windows, and a built-in bookshelf that needs to be painted. 
	Suppose one gallon of paint can paint 120 square feet. Write the program that prompts the user to input the lengths and widths of the door, 
	each window, the bookshelf; and the length, width and height of the room (in feet). The program outputs the amount of paint needed to paint
	the wall of the room, knowing it needs two coasts of paint for each wall. Including the total cost of paint.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double numDoor      = 0.0;
	double numWindow   = 0.0;
	double numShelf     = 0.0;
	double numWall      = 0.0;
	double numWallminus = 0.0;
	double numPaint     = 0.0;
	double numCost      = 0.0;  //
	double numPaintCost = 0.0;  //
	int userIn          = 0;    //Just to keep prompt up for now.
	
	cout << "Enter the total square feet of the walls: ";
	cin >> numWall;
	cout << endl;
	cout << "Enter the total square feet of the door: ";
	cin >> numDoor;
	cout << endl;
	cout << "Enter the total square feet of each window: ";
	cin >> numWindow;
	cout << endl;
	cout << "Enter the total square feet of the bookshelf: ";
	cin >> numShelf;
	cout << endl;
	cout << "Enter the cost of paint: ";
	cin >> numCost;
	cout << endl;
	cout << endl;

	numWallminus = numWall - (numDoor - numWindow - numShelf);
	numPaint     = (numWallminus / 120) * 2;
	numPaintCost = numCost * numPaint;


	cout << "Exact amount of paint cans needed: " << numPaint << endl;
	cout << "Exact cost of paint: " << numPaintCost << endl;
	cout << "Suggested amount of cans of paint: " << ceil(numPaint);
	cout << "" << endl;
	cout << "Cost of paint: " << (ceil(numPaint)) * numCost << endl;
	cout << "";
	
	_sleep(600000);
		
	return 0;
	
}