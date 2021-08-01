#include<stdio.h>
#include<conio.h>
void main()
{
 long int binary,decimal=0,i,r,j=1;
 clrscr();
 printf("enter the value of binary number :");
 scanf("%ld",&binary);
 while(binary!=0)
 {
	r=binary%10;
	decimal=decimal+r*j;
	j=j*2;
	binary=binary/10;
 }
 printf("equivalent decimal number is %ld",decimal);
 getch();
 }