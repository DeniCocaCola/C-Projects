/*
AUTHOR: @DeniCocaCola

SUMMARY: Calculates the temperature after factoring in the windchill.


*/
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> Vec1()
{
	vector<int> VectorVals(3);
	double WindSpeed = 0.0; //V
	double Temp = 0.0; //T

	cout << "Enter the wind speed (MPH): ";
	cin >> WindSpeed;
	cout << endl;

	cout << "Enter the temperature(F): ";
	cin >> Temp;
	cout << endl;

	WindSpeed = VectorVals.at(1); //V
	Temp = VectorVals.at(2); //T

	return VectorVals;
}

double MathCalc()
{
	vector<int> MathVec;
	MathVec = Vec1();
	
	double WindFactor = 0.0;

	WindFactor = (35.74 + 0.6215 * MathVec.at(2) - 35.75 * pow(MathVec.at(1), 0.16) + 0.4275 * MathVec.at(2) * pow(MathVec.at(1), 0.16));


	return WindFactor;
}

void Printer()
{
	
	cout << "Temperature (after Windchill Factor): " << MathCalc() << endl;

	return;
}

int main()
{
	Printer();

	return 0;
}
