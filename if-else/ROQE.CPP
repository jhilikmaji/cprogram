#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,d,root1,root2;
 clrscr();
 printf("enter the value of a , b and c");
 scanf("%f %f %f",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d>0)
 {
	root1=(-b+sqrt(d))/2*a;
	root2=(-b-sqrt(d))/2*a;
	printf("roots are real \nroot1:",root1);
	printf("root2:",root2);
 }
 else if(d==0)
{
	root1=-b/(2*a);
	printf("roots are real and equal\nroot1=root2=",root1);
 }
 else
{
	printf("roots are not real");
 }
 getch();
}