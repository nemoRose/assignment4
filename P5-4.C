#include<stdio.h>
void main()
{
	int age;
	clrscr();
	printf("\n Enter age : \n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n Age is appropriate to cast vote.....");
	}
	else
	{
		printf("\n You're still young to cast vote.");
	}
	getch();
}