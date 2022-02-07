#include<stdio.h>
void main()
{
	int math, physics, chem, to3, to2;
	clrscr();
	printf("\n enter marks of maths physics and chemistry in order : \n");
	scanf("%d %d %d",&math,&physics,&chem);
	to3=math+physics+chem;
	to2=math+physics;
	if(math>=65 && physics>=55 && chem>=50 && to3>=190 || to2>=140)
	{
		printf("\n You are an elligible candidate");
	}
	else
	{
		printf("\n Better luck next time...");
	}
	getch();
}