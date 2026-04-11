/*Assignment-17
To accept the number of terms a finds the sum of sine series.*/

#include<stdio.h>
#include<math.h>

int main()
{
	double x, sum=0 , term = 0;
	int n, i, j;
	long long fact;
	int sign = 1;

	printf("Enter value of x:=");
	scanf_s("%lf", &x);

	printf("\nEnter the number of terms:=");
	scanf_s("%d", &n);

	//calculating sine series using taylor's expansion:
	for (i = 1; i <= n; i++)
	{
		fact = 1;
		for (j = 1; j <= (2 *i - 1); j++)
		{
			fact = fact * j;
		}
		
		term = pow(x, (2 * i - 1)) / fact;
		sum = sum + (sign * term);
		sign = -sign;
		
	}

	printf("\nSum of sine series:= %lf \n\n", sum);
	return 0;
}

/*OUTPUT:
Enter value of x:=2
Enter the number of terms:=5
Sum of sine series:= 0.909347*/
