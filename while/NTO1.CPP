#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("enter the value of n :");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%d\n",n);
		n-=1;
	}
getch();
}