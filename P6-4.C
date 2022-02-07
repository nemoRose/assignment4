#include<stdio.h>
void main()
{
	int m;
	clrscr();
	printf("\n Enter value of m : \n");
	scanf("%d",&m);
	if(m>0)
	{
		printf("\n 1");
	}
	else if(m==0)
	{
		printf("\n 0");
	}
	else
	{
		printf("\n -1");
	}
	getch();
}