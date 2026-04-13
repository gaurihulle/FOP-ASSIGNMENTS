/*Assignment-12:
To accept two numbers from user and compute smallest divisor and Greatest Common Divisor of these two numbers.*/

#include<stdio.h>

int main()
{
	int a, b, i, gcd, temp;
	int sma_div = 0;
	printf("Enter first number:=");
	scanf_s("%d", &a);
	printf("Enter second number:=");
	scanf_s("%d", &b);

	//Finding SCD:
	for (i = 2; i < a && i < b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			sma_div = i;
			break;
		}
	}
	if (sma_div != 0)
	{
		printf("\nSmallest common divisor:= %d", sma_div);
	}
	else {
		printf("\nNo common divisor other than 1");
	}

	//Applying Euclidean Algorithm for GCD:
	int x = a, y = b;
	while (y != 0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	gcd = x;
	printf("\nGreatest Common divisor:= %d \n \n ", gcd);

	return 0;
}

/*OUTPUT:
Enter first number : = 24
Enter second number : = 36

Smallest common divisor : = 2
Greatest Common divisor : = 12*/
