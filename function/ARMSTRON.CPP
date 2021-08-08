#include<stdio.h>
#include<conio.h>
#include<math.h>
void armstrong(int);
void perfect(int);
void main()
{
int num,c;
clrscr();
printf("enter a number: ");
scanf("%d",&num);


armstrong(num);
perfect(num);
getch();
}
	void armstrong(int a)
	{
		int r,sum=0,store,c=0,num;
		store=a;
		num=a;
		while(num!=0)
		{
		  num=num/10;
		  c++;
		}
		printf("%d",a);
		while(a!=0)
		{
		  r=a%10;
		  sum=sum+pow(r,c);
		  a=a/10;
		 }
		 if(sum==store)
		 {
		 printf("\namrstrong");
		 }
		 else
		 {
		 printf("\nnot armstrong");
		 }
	       }

	       void perfect(int b)
	       {

		 int sum=0,i;
		 for(i=1;i<b;i++)
		 {
		   if(b%i==0)
		   {
		    sum=sum+i;

		   }
		}
		if(sum==b)
		{
		 printf("\nperfect number");
		}
		else
		{
		 printf("\nnot a perfect number");
		}
	      }
