#include<stdio.h>
#include<conio.h>
void main()
{
	int n ,i=0;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	while(i!=n)
	{
		printf("%d\n",i+1);
		i++;
	}
getch();
}