//delet element from an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],pos,i,n ;
	clrscr();
	printf("enter how many number you want");
	scanf("%d",&n);
	printf("enter array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("enter the deleted position");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
	 a[i]=a[i+1];
	}
	printf("after deletion the array is :\n");
	for(i=0;i<n-1;i++)
	{
	 printf("%d ",a[i]);
	}
getch();
}