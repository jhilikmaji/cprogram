//frequency of the array  element
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
	for(i=0;i<=n-1;i++)
	{  c=1;
	  for(j=i+1;j<=n;j++)
		{

			if(a[i]==a[j])
			{
				c++;
				a[j]=0;

			}

		}
		if(a[i]!=0)
		printf("frequency of %d  is %d\n",a[i],c);
	   }

getch();
}