/*
AUTHOR: @DeniCocaCola
SUMMARY: Given a data file, find descriptive statistics of the data. 
		Find the mean, median, mode, variance, standard deviation, 
		and range for the set of data given. 
*/
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;



vector <int> VectorRead() 
{
	ifstream fin;
	string filename;
	int input = 0;
	vector <int> MyVector; //Initializes vector to be used throughout program

	cout << "Enter path of file: ";
	cin >> filename; //Grabs the path of the file
	fin.open(filename.c_str()); //Opens the file
	fin >> input;

while (!fin.eof()) //Checks for the end of file, runs until it hits the eof
	{
	MyVector.push_back(input);
	fin >> input; //Adds integer to the input
	}

return MyVector;
}

double Sum(vector <int> MyVector)
{
	int i    = 0;
	double Sum2 = 0.0;
	double PrintSum = 0.0;

	for (i = 0; i < MyVector.size(); ++i){ //Runs through each integer. Runs only the amount of times according to vector's size
		Sum2 += MyVector.at(i); //Adds to previous integer
	}

	PrintSum = Sum2;
	return PrintSum;
}

double Mean(vector <int> MyVector)
{
	double PrintMean = 0.0;
	PrintMean = Sum(MyVector) / MyVector.size();  //Sum of integers in vector divided by the size of the vector
	return PrintMean;
}

double PopSize(vector <int> MyVector)
{
	double PrintSize = 0.0;
	PrintSize = MyVector.size();  //Assigns the total amount of items in the file to a variable.
	return PrintSize;
}

double Variance(vector <int> MyVector) //Variance Calculation
{
	double error     = 0.0;
	double PrintVar  = 0.0;
	double err2      = 0.0;
	double sumSq     = 0.0;
	double Variance2 = 0.0;
	int i = 0;
	
	for (i = 0; i < MyVector.size(); i++)
	{
		error = MyVector.at(i) - Mean(MyVector);
		err2 = pow(error, 2);
		sumSq += err2;
	}
	PrintVar = sumSq / (MyVector.size());

	return PrintVar;
}

double Range(vector <int> MyVector) //Range Calculation
{
	double PrintRange = 0.0;

	PrintRange = MyVector.back() - MyVector.at(0);

	return PrintRange;
}


double Median(vector <int> MyVector) //Median Calculation
{
	double PrintMedian = 0.0;
	double VecSize = 0.0;
	double VecSize2 = 0.0;
	
	VecSize = MyVector.size();  //Replaces the original counter
	VecSize2 = VecSize / 2;
	
	if (MyVector.size() % 2 == 0)
	{  //This runs if the amount of integers is even
		PrintMedian = (MyVector.at(VecSize / 2) + MyVector.at(VecSize / 2 - 1)) / 2; 
	}
	else
	{ //Otherwise, odd
		 PrintMedian = MyVector.at(VecSize2);
		
	}
	return PrintMedian;
}


double PrintMain(vector <int> MyVector) //This calls and prints out all of the variables
{
	vector<int> MainVec;
	MainVec = VectorRead();
	
	cout << "Sum is: " << Sum(MainVec) << endl;
	cout << "Mean is: " << Mean(MainVec) << endl;
	cout << "Median is: " << Median(MainVec) << endl;
	cout << "Range is: " << Range(MainVec) << endl;
	cout << "Variance is: " << Variance(MainVec) << endl;
	cout << "Total Items: " << PopSize(MainVec) << endl;


return 0;
}


int main(vector<int> MainVec) //Main calls the function that does the printing
{
	vector<int> MainVec2;

	cout << PrintMain(MainVec2) << endl;
	
	system("PAUSE");
return 0;
}
