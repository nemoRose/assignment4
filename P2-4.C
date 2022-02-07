#include<stdio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter the number to chech whether it is even or odd : \n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n Number is even");
	}
	else
	{
		printf("\n Number is odd");
	}
	getch();

}