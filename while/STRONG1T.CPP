#include<stdio.h>
#include<conio.h>
void main()
{
 int num,temp,r,i,fact,sum,j=1;
 clrscr();
 printf("enter the value of :");
 scanf("%d",&num);
 while(j<=num)
 {
	temp=j;
	sum=0;
	while(j!=0)
	{
		r=j%10;
		i=1;
		fact=1;
			while(i<=r)
			{
				fact=fact*i;
				i++;
			}
		sum=sum+fact;
		j=j/10;

	}

	if(sum==temp)
		printf(" %d ",temp);
	j=temp+1;
 }
getch();
}