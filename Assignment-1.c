/*Assignment 1:
To check if a year is a leap year or not.*/


#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to checked:=");
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		printf("%d is a leap year", year);
	}
	else if (year % 100 == 0)
	{
		printf("%d is 'not' a leap year", year);
	}
	else if (year % 400 == 0)
	{
		printf("%d is a leap year", year);
	}
	else {
		printf("%d is 'not' a leap year", year);
	}
	printf("\n\n");
	return 0;
};


/*OUTPUT:
Enter the year to checked:=2024
2024 is a leap year

Enter the year to checked:=2021
2021 is 'not' a leap year*/
