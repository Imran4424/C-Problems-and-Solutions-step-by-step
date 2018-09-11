/*
	Write a program that read any octal number and display equivalent decimal number
*/

int main()
{
	int num;

	printf("Enter any octal number\n");

	scanf("%o", &num);

	printf("%d\n", num);

	return 0;
}

/*
	for specifier of decimal number is %d
	
	for specifier of octal number is %o
*/