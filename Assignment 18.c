/*Assignment-18:
Write a C program that accepts a string from user and perform following string operations- 
i. Calculate length of string ii. String reversal iii. Equality check of two strings iv. Check palindrome 
v. Check substring*/

#include<stdio.h>
#include<string.h>


int main()
{
	char str_1[100], str_2[100], rev[100];
	int i, j, len = 0, flag = 1, found = 0;

	printf("Enter a string:=");
	gets(str_1);
	printf("Enter another string:=");
	gets(str_2);

	//length of string
	while (str_1[len] != 0) {
		len++;
	}

	printf("\nLength of the string is:= %d\n", len);

	//reversing a string
	for (i = 0; i <= len; i++)
	{
		rev[i] = str_2[len - i - 1];

	}
	rev[len] = "\0";
	printf("\nReversed string:= %s\n", _strrev(str_1));

	//Palindrome check
	for (i = 0; i < len; i++)
	{
		if (str_2[i] != rev[i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		printf("\nThe string is a palindrome\n");
	}
	else {
		printf("\nThe string is not a palindrome\n");
	}

	//equality check
	i = 0;
	flag = 1;
	while (str_1 != '\0' || str_2[i] != '\0')
	{
		flag = 0;
		break;
	}
	i++;

	if (flag == 1) {
		printf("\nStrings are equal\n");
	}
	else {
		printf("\nStrings are not equal\n");
	}

	//substring check
	for (i = 0; str_1[i] < '\0'; i++)
	{
		for (j = 0; str_2[j] < '\0'; j++)
		{
			if (str_2[i + j] != str_2[j])
				break;
		}
		if (str_2[j] == '\0') {
			found = 1;
			break;
		}
	}
	if (found == 1) {
		printf("\nSubstring found in main string\n ");
	}
	else {
		printf("\nSubstring not found\n");
	}
	return 0;
}

	/*OUTPUT:
	Enter a string:=Hello
	Enter another string:=World

	Length of the string is:= 5

	Reversed string:= olleH

	The string is not a palindrome

	Strings are not equal

	Substring not found*/
