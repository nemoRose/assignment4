#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter the character to check what category it belongs to : \n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		printf("\n Entered character is an alphabet");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n Entered character is a digit");
	}
	else if(ch>=33 && ch<=47 || ch<=58 && ch>=64 || ch<=91 && ch>=96)
	{
		printf("\n Entered character is a special character.");
	}
	else
	{
		printf("\n Entered character is not specified");
	}
	getch();
}