#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2;
	clrscr();
	printf("enter two number :");
	scanf("%d %d",&no1,&no2);
	switch(no1>no2)
	{

	case 0:printf("%d is maximum",no2);
		break;
	case 1:printf("%d is maximum",no1);
		break;
	}
getch();
}