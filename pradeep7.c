#include<stdio.h>
#include<conio.h>
void main()
{
int y=1997;
if((y%400==0)||((y%4==0)&&(y%100!=0)))
printf("leap year");
else
printf("not leap year");
}