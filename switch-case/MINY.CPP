#include<stdio.h>
#include<conio.h>
void main()
{
	int tdays,month;

	clrscr();
	printf("enter the month");
	scanf("%d",&month);
	switch(month)
	{
	case 1: printf("31 days in january");
			break;
	case 2: printf("28/29 days in february");
			break;
	case 3: printf("31 days in march");
			break;
	case 4: printf("30 days in april");
			break;
	case 5: printf("31 days in may");
			break;
	case 6: printf("30 days in june");
			break;
	case 7: printf("31 days in july");
			break;
	case 8: printf("31 days in august");
			break;
	case 9: printf("30 days in september");
			break;
	case 10: printf("31 days in october");
			break;
	case 11: printf("30 days in november");
			break;
	case 12: printf("31 days in december");
			break;
	default:printf("plese enter valid month");

	}
	getch();

}