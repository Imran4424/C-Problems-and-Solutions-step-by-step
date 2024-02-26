/**
	Write a program that read any year and display its leap year or not
*/

#include <stdio.h>

int main()
{
	int year;

	printf("Enter the year\n");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("Leap Year\n");
			} else {
				printf("Not a Leap Year\n");
			}
		}
		else {
			printf("Leap Year\n");
		}
	} else {
		printf("Not a Leap Year\n");
	}

	return 0;
}