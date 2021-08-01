#include<stdio.h>
#include<conio.h>
void main()
{
 long int binary,octal=0,i,r,j=1;
 clrscr();
 printf("enter the value of binary number :");
 scanf("%ld",&binary);
 while(binary!=0)
 {
	r=binary%10;
	octal=octal+r*j;
	j=j*2;
	binary=binary/10;
 }
 printf("equivalent octal number is %ld",octal);
 getch();
 }