#include<stdio.h>
#include<conio.h>
void main()
{
 float acc_pri,sell_pri,profit,loss;
 clrscr();
 printf("enter the acctual value of the product :");
 scanf("%f",&acc_pri);
 printf("enter the selling price of the product :");
 scanf("%f",&sell_pri);
 if(acc_pri<sell_pri)
 {
	profit=sell_pri-acc_pri;
	printf("profit=%f",profit);

 }
 else
 {
	loss=acc_pri-sell_pri;
	printf("loss=%f",loss);
 }
 getch();
}