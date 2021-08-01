#include<stdio.h>
#include<conio.h>
void main()
{
 int num,temp,r,i,fact,sum=0;
 clrscr();
 printf("enter the number :");
 scanf("%d",&num);
 temp=num;
	while(num!=0)
	{
		r=num%10;
		i=1;
		fact=1;
			while(i<=r)
			{
				fact=fact*i;
				i++;
			}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp)
		printf("the %d is strong",temp);
	else
		printf("not strong",temp);
getch();
}