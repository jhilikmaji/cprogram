//odd even in separate array in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,odd[100],even[100],i,e=0,o=0,a1=0,b1=0;
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
		{
			even[a1]=a[i];
			a1++;
			e++;
		}
		else
		{
			odd[b1]=a[i];
			b1++;
			o++;
		}
	}
	printf("total number of even elements are :");
	for(i=0;i<e;i++)
	printf("%d ",even[i]);
	printf("\ntotal number of odd elements are :");
	for(i=0;i<o;i++)
	printf("%d ",odd[i]);
getch();


}