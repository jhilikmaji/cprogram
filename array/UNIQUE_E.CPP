//to print unique ements in the array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,c,j;
	clrscr();
	printf("enter how many elements you want :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
	  c=0;
	  for(j=0;j<n;j++)
		{
			if(i!=j)
				{
					if(a[i]==a[j])
					c++;
				}
		}
	  if(c==0)
	  printf(" %d \n",a[i]);
	}
getch();
}