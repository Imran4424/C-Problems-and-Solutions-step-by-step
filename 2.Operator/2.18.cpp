
// 2.18. Write a C program to swap the values of two 
// variables using temporary variable

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double x, y;

	cout << "enter two variables: ";
	cin >> x >> y;

	cout << "Before Swap" << endl;
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;

	// swap the values 
	int temp = x; // storing the x value in temp for later use
	x = y; // since x value safe now, we can replace it by y
	y = temp; // since, x's old value in temp use that to assign y


	cout << endl << "After Swap" << endl;
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;

	return 0;
}