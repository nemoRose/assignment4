#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\nEnter the alphabet : \n");
	scanf("%c",&ch);
	if(ch=='e'||ch=='E')
	{
		printf("\n Excellent");
	}
	else if(ch=='v'||ch=='V')
	{
		printf("\nVery Good");
	}
	else if(ch=='g'||ch=='G')
	{
		printf("\nGood");
	}
	else if(ch=='a'||ch=='A')
	{
		printf("\nAverage");
	}
	else if(ch=='f'||ch=='F')
	{
		printf("\nFail");
	}
	else
	{
		printf("\n invalid input");
	}
	getch();

}