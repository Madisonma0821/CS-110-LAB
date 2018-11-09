//This program(lab 6.2) modifies the program from lab 6.1
//Uses overloaded fuctions
//has a two unrelated functions which are refrence and static functions

#include <iostream>
#include<string>
using namespace std;

//function prototype

char print(char);
double print(double);
string print(string);
double findAverage(int, int, int);
int staticCounter();
void inAndOut(int &);


//function main
int main()
{
	double result;
	int num1, num2, num3;

	print('\n');
	print("Please enter three whole numbers:");
	cin >> num1 >> num2 >> num3;
	result = findAverage(num1, num2, num3);
	print("The average is:");
	print(result);

	print("static count:");
	for (int x = 1; x <= 9; ++x)
	{
		cout << staticCounter() << endl;
	}

	print("inAndOut:");
	for (int y = 1; y <= 9;)
	{
		cout << y << endl;
		inAndOut(y);
	}

	return 0;
}

//lab 6.1:
void printLine()
{
	cout << endl;
	return;
}

void printDouble(double num)
{
	cout << num << endl;
	return;
}

void printString(string A)
{
	cout << A << endl;
	return;
}

//lab6.2:
//prints a single newline to the console
char print(char c)
{
	cout << c;
	return '\n';
}

//prints the result
double print(double num)
{
	cout << num << endl;
	return num;
}

//prints a string
string print(string A)
{
	cout << A << endl;
	return A;
}

//caculate the average and return it
double findAverage(int val1, int val2, int val3)
{
	double average;
	average = (val1 + val2 + val3) / 3.0;
	return average;
}

//lab 6.3:
int staticCounter()
{
	static int statNum;
	statNum++;
	return statNum;
}

void inAndOut(int &reVar)
{
	reVar++;
}