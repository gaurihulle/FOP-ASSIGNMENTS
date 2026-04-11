/*Assignment 8:
To accept a student's five course marks and compute his/her result. Student is passing if he/she scores marks equal to 
and above 40 in each course. If student scores aggregate greater than 75%, then the grade is distinguished.
If aggregate is 60>= and <75 then the grade of first division. If aggregate is 50>= and <60, then the grade is second division. 
If aggregate is 40>= and <50, then the grade is third division.*/


#include<stdio.h>
int main()
{
	float mat, phy, chem, eng, cs;
	float result, avg;
	printf("Enter your marks in 5 courses(out of 100):=");
	printf("\nMarks in Mathematics:=");
	scanf_s("%f", &mat);
	printf("Marks in Physics:=");
	scanf_s("%f", &phy);
	printf("Marks in Chemistry:=");
	scanf_s("%f", &chem);
	printf("Marks in English:=");
	scanf_s("%f", &eng);
	printf("Marks in Computer Science:=");
	scanf_s("%f", &cs);
	
	//Calculating result:
	avg = (mat + phy + chem + eng + cs) / 500;
	//printf("%f", avg);
	result = avg * 100;
	printf("\nTOTAL PERCENTAGE:= %.2f%", result);
	
	//checking pass or fail:
	if (mat < 40 || phy <= 40 || eng <= 40 || chem <= 40 || cs <= 40)
	{
		printf("\nFAIL");
	}
	else
	{
		printf("\nPASS");
	}

	//giving division
	if (result >= 75)
		printf("\nGrade= DISTINGUISHED");
	else if (75 < result <= 60)
		printf("\nGrade= FIRST DIVISION");
	else if (60 < result <= 50)
		printf("\nGrade= SECOND DIVISION");
	else if (50 < result <= 40)
		printf("\nGrade= THIRD DIVISION");
	else
		printf("\nGrade: FAIL");

	printf("\n\n");
	return 0;

}

/*OUTPUT:
Enter your marks in 5 courses(out of 100):=
Marks in Mathematics:=90
Marks in Physics:=90
Marks in Chemistry:=85
Marks in English:=90
Marks in Computer Science:=99

TOTAL PERCENTAGE:= 90.80
PASS
Grade= DISTINGUISHED*/
