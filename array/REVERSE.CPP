//reverse of an array
//left rotate an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,j;
	clrscr();
	printf("enter how many elements you want :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("reverse of the array is:");
	for(i=n;i>=0;i--)
	{
		printf("%d \t",a[i]);

	}
getch();
}