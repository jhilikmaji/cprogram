#include<stdio.h>
#include<conio.h>
void main()
{
	char al;
	clrscr();
	printf("enter the alphabate to check vowel or consonant");
	scanf("%s",&al);
	switch(al)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("the alphabate %c is vowel",al);
	break;
	default:printf("the alphabate %c is consonant",al);
	}
getch();
}
