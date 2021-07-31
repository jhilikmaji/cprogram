#include<stdio.h>
#include<conio.h>
void main()
{
 int unit;
 float bill;
 clrscr();
 printf("enter the unit");
 scanf("%d",&unit);
 if(unit<=50)
 {
	bill=unit*0.50;
 }
 else if(unit>50 && unit<=150)
 {
	bill=unit*0.75;
 }
 else if(unit>150  && unit<=250)
 {
	bill=unit*1.20;
 }
 else
 {
	bill=unit*1.50;
 }
 printf("electricity bill is %f",bill);
 getch();
}