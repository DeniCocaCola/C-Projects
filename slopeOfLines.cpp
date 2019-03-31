/*
AUTHOR: @DeniCocaCola
SUMMARY: Finds the slope of two lines, slope-intercept form, tests for equal lines and whether they
		 are perpendicular or parallel.

*/


#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
	double a, b, c = 0.0;
	double a2, b2, c2 = 0.0;
	int badData = 0; //0 false, 1 true
	double intersection, slopeINT = 0.0;
	double LineIntercept1, LineIntercept2 = 0.0;
	int slope1 = 0;
	int slope2 = 0;


	//DISCLAIMER
	cout << "Line equation in standard form: ax + by = c" << endl;
	cout << "a and b cannot be zero. a, b, c must be real numbers." << endl;
	cout << "" << endl;
	

	//LINE ONE INPUT
	cout << "Give the x coefficient of line 1 (a): ";
	cin >> a;
	cout << "a1 = " << a << endl;

	cout << "Give the y coefficient of line 1 (b): ";
	cin >> b;
	cout << "b1 = " << b << endl;

	cout << "Give the constant (c): ";
	cin >> c;
	cout << "c1 = " << c << endl;
	cout << "" << endl;

	//LINE TWO INPUT
	cout << "Give the x coefficient of line 2 (a): ";
	cin >> a2;
	cout << "Line2 A = " << a2 << endl;

	cout << "Give the y coefficient of line 2 (b): ";
	cin >> b2;
	cout << "Line2 B = " << b2 << endl;

	cout << "Give the constant (c): ";
	cin >> c2;
	cout << "c2 = " << c2 << endl;
	cout << endl;
	

	//TESTING LINE ONE
	if (a == 0 && b == 0)
		{
		cout << "ERROR in Line 1: Both a and b cannot be 0." << endl;
		badData = 1;
		}


	//TESTING LINE TWO
	if (a2 == 0 && b2 == 0)
		{
		cout << "ERROR in Line 2: Both a and b cannot be 0." << endl;
		badData = 1;
		}
	

	//BOTH LINES OK 
	if (badData == 0)
		{
			//TYPE OF LINE TEST
			if (b == 0)
			{
				cout << "Line 1 is vertical." << endl;
				slope1 = 2;
			}

			if (a2 == 0)
			{
					cout << "Line 2 is horizontal." << endl;
					slope2 = 1;
			}
			if (a2 != 0 && b2 != 0) 
			{
					cout << "Line 2 is skewed." << endl;
					slope2 = 3;
			}
			

			if (b2 == 0)
			{
				cout << "Line 2 is vertical." << endl;
				slope2 = 2;
			}

			if (a == 0)
			{
				cout << "Line 1 is horizontal." << endl;
					slope1 = 1;
			}
			if (a != 0 && b != 0)
			{
					cout << "Line 1 is skewed." << endl;
					slope1 = 3;
			}
				
		}
			


			//PRINTING SLOPE OF LINES
			//slope1 = -(a/b);
			//slope2 = -(a2/b2);
			cout << "Slope of Line 1:" << "-(" << a << "/" << b << ")" << endl;
			cout << "Slope of Line 2:" << "-(" << a2 << "/" << b2 << ")" << endl;
			cout << endl;
			
			

			//SLOPE-INTERCEPT FORMS
			if (b == 0)
			{
				cout << "**Could not determine Slope intercept Form of Line 1. b1 = 0" << endl;
			}
			else if (b2 == 0)
			{
				cout << "**Could not determine Slope intercept Form of Line 2. b2 = 0" << endl;
			}
			else
			{
			cout <<"Slope-Intercept Form of Line 1: "<< "y=-" << a << "/" << b <<"+"<<c/b << endl;
			cout <<"Slope-Intercept Form of Line 2: "<< "y=-" << a2 << "/" << b2 <<"+"<<c2/b2 << endl;
			}



			//TESTING FOR EQUAL LINES AND INTERSECTION
			if ((a == a2 && b == b2 && c == c2) || (a / a2 == b / b2) && (b / b2 == c / c2))
			{
				cout << "The lines are equal." << endl;
				cout << "No intersection." << endl;
			}
			else 
			{
				cout << "Lines are not equal." << endl;
			}	



			//TEST IF LINES ARE PARALLEL OR PERPENDICULAR
			if ((slope1 == 1 && slope2 == 2) || (slope2 == 1 && slope1 == 2))
			{
				cout << "Lines are perpendicular." << endl;
			}
			else if ((slope1 == 1 && slope2 == 3) || (slope2 == 1 && slope1 == 3))
			{
				cout << "Lines are not parallel, but not perfectly perpendicular." << endl;
			}
			else if ((slope1 == 1 && slope2 == 1)|| (slope1 == 2 && slope2 == 2))
			{
				cout << "Lines are parallel." << endl;
			}

	system("PAUSE");
	return 0;
}