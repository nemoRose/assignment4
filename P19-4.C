#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter the alphabet to check upper and lower case : \n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n Alphabet is in Uppercase");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n Alphabet is in Lowercase..");
	}
	else
	{
		printf("\n Input is not defined...");
	}
	getch();
}