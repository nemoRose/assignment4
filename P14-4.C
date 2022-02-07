#include<stdio.h>
void main()
{
	int a,b,c,sum;
	clrscr();
	printf("\n Enter values to form a perfect triangle : \n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{
		printf("\n Triangle is valid");
	}
	else
	{
		printf("\n Triangle is invalid");
	}
	getch();
}