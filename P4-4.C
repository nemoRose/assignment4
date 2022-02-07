#include<stdio.h>
void main()
{
	int year;
	clrscr();
	printf("\nEnter year to check whether leap year or no : \n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n Entered year is a leap year.");
	}
	else
	{
		printf("\n Entered year is not a leap year.");
	}
	getch();
}