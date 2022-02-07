#include<stdio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter number to check whether it is -ve or +ve : \n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n Number is +ve");
	}
	else
	{
		printf("\Number is -ve");
	}
	getch();
}