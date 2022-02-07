#include<stdio.h>
void main()
{

	int n;
	clrscr();
	printf("\nEnter the month number : ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nJanuary-31 days");
	}
	else if(n==2)
	{
		printf("\nFebruary-28days");
	}
	else if(n==3)
	{
		printf("\nMarch-31 days");
	}
	else if(n==4)
	{
		printf("\nApril-30 days");

	}
	else if(n==5)
	{
		printf("\nMay-31 days");
	}
	else if(n==6)
	{
		printf("\nJune-30 days");
	}
	else if(n==7)
	{
		printf("\nJuly-31 days");
	}
	else if(n==8)
	{
		printf("\nAugust-31 days");
	}
	else if(n==9)
	{
		printf("\nSeptember-30 days");
	}
	else if(n==10)
	{
		printf("\nOctober-31 days");
	}
	else if(n==11)
	{
		printf("\nNovember-30 days");
	}
	else if(n==12)
	{
		printf("\nDecember-31 days");
	}
	else
	{
		printf("\n invalid input");
	}
	getch();
}