/**
	Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n (nth number)
*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int nthNumber;
	/// sum value need to be initialized with 0 for series summation
	/// if sum is not initialized the compiler will initialize sum with garbage value
	/// that will produce wrong output
	///
	/// now question is why 0.
	/// To understand this we need to learn the identity law of mathematics
	/// There are two identity law available, one for addition, one for multiplication
	///
	/// addition identity law, 
	/// 						X + 0 = X
	///							5 + 0 = 5
	/// 						8 + 0 = 8
	///
	/// that means if we add 0 with some value, then the value will be unchanged that's why
	/// 0 is called identity value for addition.
	/// 
	/// multiplication identity law,
	/// 							X . 1 = X
	///								3 . 1 = 3
	/// 							6 . 1 = 6
	///
	/// that means if we multiply 1 with some value, then the value will be unchanged that's why
	/// 1 is called identity value for multiplication
	///
	/// that's why we are using 0 here. By using 0, real summation value will be unchanged and
	/// we will avoid the garbage value error.
	int sum = 0;

	printf("Please enter the nth number\n");
	scanf("%d", &nthNumber);

	/// first number of the series
	int a = 1;

	/// difference between two adjacent number
	int d = 1;

	/// always initialize i with first number of the series
	int i = a;

	/// always check condition for nth Number
	while (i <= nthNumber) {
		/// adding the current number to the sum
		sum = sum + i;

		// always increment i by difference between two adjacent number
		i = i + d;
	}

	printf("series sum is - %d\n", sum);

	return 0;
}

/**
	First need to find some points,

	first number of the series, a - 1
	difference between two adjacent number is, d = 1

	nth number is, n - this will be inputed by the user(remember this is not value of n, this is nth number)
*/
