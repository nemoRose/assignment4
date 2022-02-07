#include<stdio.h>
void main()
{
	int n1,n2,mul;
	clrscr();
	printf("\n Enter value to be multiplied : \n");
	scanf("%d %d",&n1,&n2);
	mul=n1*n2;
	printf("The multiplication of %d and %d is : %d",n1,n2,mul);
	getch();
}