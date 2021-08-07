//swap_of_two_number
#include<stdio.h>
#include<conio.h>
void swap(int,int);
void swap1(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two number : ");
scanf("%d%d",&a,&b);
printf("\nafter swap the numbers are(using 3rd variable):  ");
swap(a,b);
printf("\nafter swap the numbers are(without using 3rd variable):  ");
swap(a,b);

getch();
}
	void swap(int x,int y)
	{
		int c;
		c=x;
		x=y;
		y=c;
		printf("%d %d",x,y);
	}

	void swap1(int x,int y)
	{
	  x=x+y;
	  y=x-y;
	  x=x-y;
	  printf("%d %d",x,y);
	}