
// 2.19. Write a C program to swap the values of two variables 
// without using temporary variable

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

	// swapping values
	// we are assiging x with sum of x + y
	x = x + y;

	// now x holds the sum of x + y, y = x - y will be old x
	y = x - y; // y now holds old x

	// now y holds old x, x = sum of old x + old y value
	// so, x = x - y will be old y value, since x is total and y is old x
	x = x - y; // x now holds old y

	cout << endl << "After Swap" << endl;
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;

	return 0;
}