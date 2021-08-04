//to count total number of even and odd elements in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,b[100],i;
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
		b[i]=a[i];
	}
	printf("new array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}

	getch();

}