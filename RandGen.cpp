#include "stdafx.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

FILE *ftp;


void main()
{
	srand(time(NULL));
	int account[100];
	int balance[100];
	ftp = fopen("F:\\numbers.txt", "w");
	if (ftp == NULL){
		printf("Error");
	}
	int a = rand(); //a = Random value 
	int b = 0; //b = Counter
	while (b < 100){
		a = (rand() - rand() / 2);
		fprintf(ftp, "%d\t", b + 1);
		fprintf(ftp, "%.2d\n", a);
		b++;
	}
	fclose(ftp);

	b = 0;

	ftp = fopen("F:\\numbers.txt", "r");
	while (b < 100)
	{
		fscanf(ftp, "%d \t %d", &account[b], &balance[b]);

		b++;
	}
	fclose(ftp);

	b = 0;
	while (b < 100)
	{
		printf("ID no.:%d\tAccount balance.:%d\n", account[b], balance[b]);

		b++;
	}
	b = 0;
	printf("\n");
	printf("ACCOUNTS WITH A NEGATIVE BALANCE:\n -------------------------------------\n"); //Negative values
	while (b < 100)
	{

		if (balance[b] < 0)
		{
			printf("ID no.:%d\tAccount balance.:%d\n", account[b], balance[b]);
		}
		b++;
	}
}

