/*Assignment-19:
Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary). 
Define function members to compute a) total number of employees in an organization b) count of male and female employee 
c) Employee with salary more than 10,000 d) Employee with designation “Asst Manager”*/

#include<stdio.h>
#include<string.h>
#include "Lab_codes.h"

//global variables
struct employee
{
	char name[50];
	char des[50];
	char gen[10];
	char doj[15];
	float salary;
};

//count male and female employees:
void chk_gen(struct employee e[], int n)
{
	int i, male = 0, female = 0;
	for (i = 0; i < n; i++)
	{
		if (strcmp(e[i].gen, "male") == 0) {
			male++;
		}
		else {
			female++;
		}
	}
	printf("Male employees:= %d\n", male);
	printf("Female employees:= %d\n",female);
}

//number of employees with salary>10,000:
void hs(struct employee e[], int n)
{
	int i;
	printf("Employees with salary more than 10,000:= ");
	
	for (i = 0; i < n; i++)
	{
		if (e[i].salary > 10000) {
			printf("%s", e[i].name);
		}
	}
	printf("\n");
}

//display all assistant managers:
void asst_manager(struct employee e[], int n)
{
	int i;
	printf("Employees with designation 'ASSISTANT MANAGER':=");

	for (i = 0; i < n; i++)
	{
		if (strcmp(e[i].des, "asstManager") == 0)
		{
			printf("%s", e[i].name);
		}
	}
	printf("\n");
}

//main:
int main()
{
	struct employee e[100];
	int n, i;

	printf("Enter the number of employees:=");
	scanf_s("%d", &n);

	//input employee details:
	for (i = 0; i < n; i++)
	{
		printf("\nEmployee [%d]", i+1);

		printf("\nName:= ");
		gets(e[i].name);

		printf("Designation:= ");
		gets(e[i].des);

		printf("\nGender:= ");
		gets(e[i].gen);

		printf("Date of joining:= ");
		gets(e[i].doj);

		printf("Salary:= ");
		scanf_s("%f", &e[i].salary);
	}

	//display total employees:
	printf("\nTotal number of employees:= %d\n", n);

	//functions to call:
	chk_gen(e, n);
	hs(e, n);
	asst_manager(e, n);
	
	return 0;
}

/*OUTPUT
Enter the number of employees:=2

Employee [1]
Name:= Krish
Designation:= asstmanager
Gender:= male
Date of joining:= 10-2-2019
Salary:= 50000

Employee [2]
Name:= Tina
Designation:= team lead
Gender:= female
Date of joining:= 12-4-2021
Salary:= 15000

Total number of employees:= 2
Male employees:= 1
Female employees:= 1
Employees with salary more than 10,000:= krish tina
Employees with designation 'ASSISTANT MANAGER':= krish */
