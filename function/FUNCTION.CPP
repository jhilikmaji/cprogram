//to show structure of function
#include<stdio.h>
#include<conio.h>
void name(); //function declear (without argument)
void sum(int,int); //function declear with argument
void main()
{
	int a,b;
	clrscr();
	printf("welcome ");
	name(); //call
	printf("\n\nenter two number :");
	scanf("%d %d",&a,&b);
	printf("sum of two number is :");
	sum(a,b);//function call


getch();
}
void name()//defination
{
  printf("jhilik ");
}
void sum(int x,int y)
{
 printf("%d",x+y);
 }