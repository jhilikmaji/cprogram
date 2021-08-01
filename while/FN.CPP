#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,i=1,n,c;
 clrscr();
 printf("enter the value of n :");
 scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
getch();
}