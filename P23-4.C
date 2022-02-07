#include<stdio.h>
void main()
{
	float l,b,h,r,a4,s,a1,a2,a3;
	int n;
	clrscr();
	printf("\n choose the area you want to print:\n 1) area of square \n 2) area of rectangle \n 3) area of triangle \n 4)area of circle\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("\nEnter value of side : \n");
		scanf("%f",&s);
		a1=s*s;
		printf("\n the area of square : %f",a1);
		break;
		case 2:
		printf("\nEnter value of side and width: \n");
		scanf("%f %f",&l,&b);
		a2=l*b;
		printf("\n the area of rectangle : %f",a2);
		break;
		case 3:
		printf("\nEnter value of height and width : \n");
		scanf("%f %f",&h,&b);
		a3=h*b/2;
		printf("\n the area of triangle : %f",a3);
		break;
		case 4:
		printf("\nEnter value of radius : \n");
		scanf("%f",&r);
		a4=3.14*r*r;
		printf("\n the area of circle : %f",a4);
		break;
		default:
		printf("invalid input....");

	}
	getch();

}