#include<stdio.h>
void main()
{

	int n;
	clrscr();
	printf("\nEnter the month number : ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nJanuary");
	}
	else if(n==2)
	{
		printf("\nFebruary");
	}
	else if(n==3)
	{
		printf("\nMarch");
	}
	else if(n==4)
	{
		printf("\nApril");

	}
	else if(n==5)
	{
		printf("\nMay");
	}
	else if(n==6)
	{
		printf("\nJune");
	}
	else if(n==7)
	{
		printf("\nJuly");
	}
	else if(n==8)
	{
		printf("\nAugust");
	}
	else if(n==9)
	{
		printf("\nSeptember");
	}
	else if(n==10)
	{
		printf("\nOctober");
	}
	else if(n==11)
	{
		printf("\nNovember");
	}
	else if(n==12)
	{
		printf("\nDecember");
	}
	else
	{
		printf("\n invalid input");
	}
	getch();
}