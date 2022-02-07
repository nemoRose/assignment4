	#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,x,y;
	clrscr();
	printf("\n Enter values for quadratic equation -  a,b,c : \n");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		x= (-b + sqrt(d))/2*a;
		y= (-b - sqrt(d))/2*a;
		printf("\n the quadratic equation : %da + %db + c = 0",x,y);
	}
	else if(d==0)
	{
		x= b/2*a;
		printf("\nthe quadratic equation is : %da + c = 0",x);
	}
	else
	{
		printf("\n Roots are imaginary \n No solution");
	}
	getch();
}

