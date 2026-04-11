/*Assignment-13:
To accept a number from user and print digits of number in a reverse order.*/

#include<stdio.h>
int main()
{
	int num, digit;
	printf("Enter a number:=");
	scanf_s("%d", &num);
	
	if (num== 0)
	{
		printf("\nNumbers in reverse order are:= 0");
	}
	else {
		printf("\nNumbers in reverse order are:=");
		while (num != 0)
		{
			digit = num % 10;
			printf("%d ", digit);
			num = num / 10;
		}

	}
	printf("\n\n");
	return 0;
}

/*OUTPUT:
Enter a number:=4321

Numbers in reverse order are:=1 2 3 4

*/
