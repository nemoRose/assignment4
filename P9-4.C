#include<stdio.h>
void main()
{
	int co1,co2;
	clrscr();
	printf("\n Enter the coordinates : \n");
	scanf("%d %d",&co1,&co2);
	if(co1>0 && co2>0)
	{
		printf("\n the coordinates are in 1st quadrant");
	}
	else if(co1<0 && co2>0)
	{
		printf("\n the coordinates are in 2nd quadrant");
	}
	else if(co1<0 && co2<0)
	{
		printf("\n the coordinates are in 3rd quadrant");
	}
	else
	{
		printf("\n the coordinates are in 4th quadrant");
	}
	getch();
}