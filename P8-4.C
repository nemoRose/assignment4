#include<stdio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("\Enter values for n1,n2,n3 : \n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("\n  n1 is greatest of all...");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("\n n2 is greatest of all....");
	}
	else
	{
		printf("\n n3 is greatest of all....");
	}
	getch();
}