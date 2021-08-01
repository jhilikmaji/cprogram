#include<stdio.h>
#include<conio.h>
void main()
{
  int num,c;
  clrscr();
  printf("enter a number :");
  scanf("%d",&num);
  c=num%2;
  switch(c)
  {
   case 0: printf("%d is EVEN",num);
	break;
   default: printf("%d is odd",num);
   }
getch();

}