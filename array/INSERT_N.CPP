#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],pos,num,n,i;
	clrscr();
	printf("enter the number of element :");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position: ");
	scanf("%d",&pos);
	printf("enter the number: ");
	scanf("%d",&num);
	for(i=n-1;i>=pos;i--)
		a[i+1]=a[i];
	a[pos-1]=num;
	printf("after insertion the array is : \n");

	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}


 getch();
}