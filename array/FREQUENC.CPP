//to count frequency of each elements in an array
#include<stdio.h>
#include<conio.h>
void main()
{
	long int a[100];
	int i,n,c;
	clrscr();
	printf("enter how many elements you want :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);

	}
	for(i=0;i<n;i++)
	{
	  c=0;
	  while(a[i]!=0)
	  {
		a[i]=a[i]/10;
		c++ ;
	  }
	  printf("frequency of %d no element is:  %d \n",i,c);
	}
getch();
}