//search an element
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n, num,c=0;
	clrscr();
	printf("enter how many elements you want :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("enter the number which you want to search :");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
		 printf("the number %d is found ",num);
		 c++;
		 break;
		 }

	}
	if(c==0)
	{
	printf("the number is not present in the array");
	}
getch();
}