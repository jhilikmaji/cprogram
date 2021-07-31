#include<stdio.h>
#include<conio.h>
void main()
{
 float phy,che,bio,math,com,sum,per;
 clrscr();
 printf("enter the numbers of the subjects physics,chemistry,biology,math,computer\n");
 scanf("%f%f%f%f%f",&phy,&che,&bio,&math,&com);
 sum=phy+che+bio+math+com;
 per=(sum*100)/500;
 if(per>=90)
 {
  printf("percentage>=%f:Greade A",per);
 }
 else if(per>=80)
 {
  printf("percentage>=%f:Greade B",per);
 }
 else if(per>=70)
 {
  printf("percentage>=%f:Greade C",per);
 }
 else if(per>=60)
 {
  printf("percentage>=%f:Greade D",per);
 }
 else if(per>=40)
 {
  printf("percentage>=%f:Greade E",per);
 }
 else if(per<40)
 {
  printf("percentage>=%f:Greade F",per);
 }
 getch();
}