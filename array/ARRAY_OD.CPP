//to count total number of even and odd elements in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,odd=0,even=0,i;
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
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("total number of even elements :%d",even);
	printf("total number of odd elements :%d",odd);

}