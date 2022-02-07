#include<stdio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("\n Enter numbers n1 and n2 : ");
	scanf("%d %d",&n1,&n2);
	if(n1==n2)
	{
		printf("\nThe numbers are equal");
	}
	else
	{
		printf("\n The numbers are not equal");
	}
	getch();
}