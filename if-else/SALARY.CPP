#include<stdio.h>
#include<conio.h>
void main()
{
	float gross,basic,hra,da;
	clrscr();
	printf("enter the basic salary of the employee");
	scanf("%f",&basic);
	if(basic<=10000)
	{
		hra=(basic*20)/100;
		da=(basic*80)/100;
	}
	else if(basic<=20000)
	{
		hra=(basic*25)/100;
		da=(basic*90)/100;
	}
	else if(basic>20000)
	{
		hra=(basic*30)/100;
		da=(basic*95)/100;
	}
	gross=basic+hra+da;
	printf("gross salary of the employee is %f",gross);
	getch();
}