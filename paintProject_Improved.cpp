/*
Project by: @DeniCocaCola
SUMMARY:
	A room has one door, two windows, and a built-in bookshelf that needs to be painted. 
	Suppose one gallon of paint can paint 120 square feet. Write the program that prompts the user to input the lengths and widths of the door, 
	each window, the bookshelf; and the length, width and height of the room (in feet). The program outputs the amount of paint needed to paint
	the wall of the room, knowing it needs two coasts of paint for each wall. Including the total cost of paint.

Key Features:
	**Allows user to input the seperate lengths and widths or input predetermined square footage. (Detects invalid answer)
	**Allows seperate window and wall sizes. 
	**Gives exact and suggested amount for paint. (+cost)

*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;
int main()
{
	
	int userIn = 0; // To determine whether to go straight to calculating final square footage or do each seperately
	
	// Following hold the total square footage of each
	
	double numDoor      = 0.0;	// Square footage of the door
	double numWindow    = 0.0;	// Square footage of both windows
	double numShelf     = 0.0;	// Square footage of the bookshelf
	double numWall      = 0.0;	// Square footage of all walls together
	double numWallminus = 0.0;	// Square footage of wall afterwards
	double numPaint     = 0.0;	// Number of paint cans
	double numCost      = 0.0;  // Cost of each can
	double numPaintCost = 0.0;  // Total cost of all the cans

		
	cout << "Have you calculated the total square feet of the walls/door/windows/shelf?"<< endl; // This will determine if the user already has the totals for the sq. ft.
	cout << "Yes = 1, No = 0"<< endl;														     // If not, the program will do the math for the user.
	cout << "Answer: ";
	cin >> userIn;		
		
	
	if (userIn == 1) { //Yes
	
	cout << "Enter the total square feet of the walls: ";
	cin >> numWall;
	cout << endl;
	cout << "Enter the total square feet of the door: ";
	cin >> numDoor;
	cout << endl;
	cout << "Enter the total square feet of both windows: ";
	cin >> numWindow;
	cout << endl;
	cout << "Enter the total square feet of the bookshelf: ";
	cin >> numShelf;
	cout << endl;
	cout << "Enter the cost of paint: ";
	cin >> numCost;
	cout << endl;
	cout << endl;

		// Calculating final outputs
	numWallminus = numWall - (numDoor + numWindow + numShelf); // Wall sq. ft. with the door/windows/shelf subtracted
	numPaint     = (numWallminus / 120) * 2;				   // Calculates
	numPaintCost = numCost * numPaint;

		// Printing final outputs
	cout << "Exact amount of paint cans needed: " << numPaint << endl;
	cout << "Exact cost of paint: $" << numPaintCost << endl;
	cout << "Suggested amount of cans of paint: " << ceil(numPaint);
	cout << "" << endl;
	cout << "Cost of paint: $" << (ceil(numPaint)) * numCost << endl;
	cout << "";
		
	} // End of if statement
	
		
	
	else if (userIn == 0) {   // No, so let's have the user input the dimensions to compute the final outputs.
		
		//Final Outputs
	double numDoor      = 0.0;	// Square footage of the door.
	double numWindow    = 0.0;	// Square footage of both windows.
	double numShelf     = 0.0;	// Square footage of the bookshelf.
	double numWall      = 0.0;	// Square footage of all walls together.
	double numWallminus = 0.0;	// Square footage of wall afterwards.
	
		//Wall Lengths
	double numWallLength1 = 0.0;
	double numWallLength2 = 0.0;
	double numWallLength3 = 0.0;
	double numWallLength4 = 0.0;
		//Wall Widths
	double numWallWidth1  = 0.0;
	double numWallWidth2  = 0.0;
	double numWallWidth3  = 0.0;
	double numWallWidth4  = 0.0;
		//Bookshelf
	double numShelfLength = 0.0;
	double numShelfWidth  = 0.0;
		//Windows
	double numWinLength1  = 0.0;
	double numWinWidth1   = 0.0;
	double numWinLength2  = 0.0;
	double numWinWidth2   = 0.0;
		//Door
	double numDoorLength  = 0.0;
	double numDoorWidth   = 0.0;
		//Paint
	double numPaint		  = 0.0; // Amount of paint cans.
	double numPaintTotal  = 0.0; // Total cost of paint.
	double numPaintCost   = 0.0; // Cost of each paint can.

	
		//Wall 1
	cout << "Enter the length (in feet) of Wall 1: ";
	cin >> numWallLength1;
	cout << endl;
	cout << "Enter the width (in feet) of Wall 1: ";
	cin >> numWallWidth1;
	cout << endl;

		//Wall 2
	cout << "Enter the length (in feet) of Wall 2: ";
	cin >> numWallLength2;
	cout << endl;
	cout << "Enter the width (in feet) of Wall 2: ";
	cin >> numWallWidth2;
	cout << endl;

		//Wall 3
	cout << "Enter the length (in feet) of Wall 3: ";
	cin >> numWallLength3;
	cout << endl;
	cout << "Enter the width (in feet) of Wall 3: ";
	cin >> numWallWidth3;
	cout << endl;

		//Wall 4
	cout << "Enter the length (in feet) of Wall 4: ";
	cin >> numWallLength4;
	cout << endl;
	cout << "Enter the width (in feet) of Wall 4: ";
	cin >> numWallWidth4;
	cout << endl;


		//Bookshelf
	cout << "Enter the length (in feet) of the Bookshelf: ";
	cin >> numShelfLength;
	cout << endl;
	cout << "Enter the width (in feet) of the Bookshelf: ";
	cin >> numShelfWidth;
	cout << endl;

		//Window
	cout << "Enter the length (in feet) of Window 1: ";
	cin >> numWinLength1;
	cout << endl;
	cout << "Enter the width (in feet) of Window 1: ";
	cin >> numWinWidth1;
	cout << endl;
	cout << "Enter the length (in feet) of Window 2: ";
	cin >> numWinLength2;
	cout << endl;
	cout << "Enter the width (in feet) of Window 2: ";
	cin >> numWinWidth2;
	cout << endl;

		//Door
	cout << "Enter the length (in feet) of the Door: ";
	cin >> numDoorLength;
	cout << endl;
	cout << "Enter the length (in feet) of the Door: ";
	cin >> numDoorWidth;
	cout << endl;

		//Price of Paint
	cout << "Enter the price of each can of paint: ";
	cin >> numPaintCost;
	cout << endl;


		//Getting totals for each final variable
	numWall = (numWallLength1 * numWallWidth1) + (numWallLength2 * numWallWidth2) + (numWallLength3 * numWallWidth3) + (numWallLength4 * numWallWidth4); //Total Wall Sq. Ft.
	numShelf = numShelfLength * numShelfWidth; // Bookshelf sq. ft.
	numWindow = (numWinLength1 * numWinWidth1) + (numWinLength2 * numWinWidth2); // Window sq. ft.
	numDoor = numDoorLength * numDoorWidth;

		//Calculating final outputs
	numWallminus = numWall - (numDoor + numWindow + numShelf);
	numPaint     = (numWallminus / 120) * 2;
	numPaintTotal = numPaintCost * numPaint;

		//Printing final outputs
	cout << "Exact amount of paint cans needed: " << numPaint << endl;
	cout << "Exact cost of paint: $" << numPaintTotal << endl;
	cout << "Suggested amount of cans of paint: " << ceil(numPaint);
	cout << "" << endl;
	cout << "Cost of paint: $" << (ceil(numPaint)) * numPaintCost << endl;
	cout << ""<<endl;

		} // End of else if statement
	
		//Detects invalid userIn answer
	if (userIn != 1) 
		if (userIn != 0)
		cout << "Answer not recognized, or something went wrong. Please restart program.";
		cin.get();
	
		system("pause");
	return 0;
}
