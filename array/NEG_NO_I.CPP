//to count total number of even and odd elements in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,neg=0,i;
	clrscr();
	printf("enter how many number you want :");
	scanf("%d",&n);
	printf("enter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			neg++;
	}
	if(neg==0)
		printf("there are no negative element in the array");
	else
		printf("total number of negative elements :%d\n",neg);

	getch();

}