#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter the values of sides of a triangle : \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && a==c)
	{
	       printf("\nEquilateral Triangle ");
	}
	else if(a==b || b==c || a==c)
	{
		printf("\n Isoceles Triangle");
	}
	else
	{
		printf("\n scalene Triangle");
	}
	getch();
}