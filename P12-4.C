#include<stdio.h>
void main()
{
	float temp;
	clrscr();
	printf("\n Enter temperature : \n");
	scanf("%f",&temp);
	if(temp<=0)
	{
		printf("\n Freezing weather");
	}
	else if(temp>0 && temp<=10)
	{
		printf("\n Very Cold Weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("\n Cold Weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("\n Normal weather");
	}
	else if(temp>30 && temp<40)
	{
		printf("\n It's Hot");
	}
	else
	{
		printf("\n It's Very Hot");
	}
	getch();
}