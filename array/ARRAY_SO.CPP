//sorting an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,temp;
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
	   for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("after sorting the array is :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
getch();


}