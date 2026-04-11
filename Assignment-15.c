/*Assignment-15
To generate pseudo random numbers*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n, i;
	srand(time(0));

	printf("Number of random numbers to be printed:= ");
	scanf_s("%d", &n);

	printf("\nPseudo random numbers:= \n");
	for (i = 0; i <= n; i++)
	{
		printf("%d\n", rand());
	}
	
	return 0;
}

/*OUTPUT:
Number of random numbers to be printed:= 5

Pseudo random numbers:=
2788
7750
1488
6799
10477
19440
*/
