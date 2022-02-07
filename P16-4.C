#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter an alphabet : \n");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n Entered alphabet is a vowel");
	}
	else
	{
		printf("\n Entered alphabet is a consonant.");
	}
	getch();
}