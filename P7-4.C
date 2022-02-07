#include<stdio.h>
void main()
{
	int height;
	clrscr();
	printf("\nEnter height in cm : \n");
	scanf("%d",&height);
	if(height<152)
	{
		printf("\n Your height is small..");
	}
	else
	{
		printf("\nYour height is average.");
	}
	getch();
}