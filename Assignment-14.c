/*Assignment-14
To input binary number from user and convert it into decimal number.*/

#include<stdio.h>
#include<math.h>

int main()
{
	int binary, decimal = 0, base = 1;
	int num, i, temp;

	printf("Enter a binary number:= ");
	scanf_s("%d", &binary);

	num= (binary == 0) ? 1 : (int)log10(abs(binary)) + 1; //to calculate the number of digits in the given number

	//extracting each digit:
	for (i = 0; i <= num; i++)
	{
		temp = binary % 10;
		if (temp != 0)
		{
			decimal = decimal + (temp * base);
		}
		base = base * 2;
		binary = binary / 10;

	}

	printf("\nDecimal Equivalent is:= %d\n\n", decimal);
	
}
/*OUTPUT:
Enter a binary number:= 1101
Decimal Equivalent is:= 13

Enter a binary number:= 100
Decimal Equivalent is:= 4

Enter a binary number:= 10
Decimal Equivalent is:= 2
*/
