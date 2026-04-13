/*Assignment-21:
Write a C program to copy contents of one file to another using File handling.*/

#include<stdio.h>

int main()
{
	char ch;
	FILE* fp_1, * fp_2;

	fp_1 = fopen_s("spec.txt", "r"); //read mode
	fp_2 = fopen_s("new.txt", "w"); //write mode
	
	//check to see if the files were able to load
	if (fp_1 == NULL || fp_2 == NULL) {
		printf("Error opening file\n");
	}

	//extract content character by character
	ch = fgetc(fp_1);

	while (ch != EOF)
	{
		fputc(ch, fp_2); //write fp_! to fp_2
		ch = fgetc(fp_1);
	}

	//closing file handling
	fclose(fp_1);
	fclose(fp_2);

	printf("File copied successfully.\n");

	printf("\n\n");
	return 0;

}
