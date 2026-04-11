/*Assignment 9:
To check whether the input number is Armstrong number or not.An Armstrong number is an integer with three digits such that the sum 
of the cubes of its digits is equal to the number itself.*/


#include<stdio.h>
int main()
{
	int n, dn, temp = 0, d;
	printf("Enter the number to be checked:=");
	scanf_s("%d", &n);
	dn = n;
	while (dn != 0)
	{
		d = dn % 10;
		temp += d * d * d;
		dn = dn / 10;
	}

	if (temp == n)
		printf("%d is an Armstrong number", n);
	else
		printf("%d is NOT an Armstrong number", n);
	
	printf("\n\n");
	return 0;
	
}
/*OUTPUT:
Enter the number to be checked:=153
153 is an Armstrong number

Enter the number to be checked:=247
247 is NOT an Armstrong number*/
