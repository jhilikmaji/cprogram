#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],pos,n,i;
	clrscr();
	printf("enter the number of element :");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the deleted locaton: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
		a[i]=a[i+1];

	printf("after deletion the array is : \n");

	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}


 getch();
}