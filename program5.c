#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",a,b,c);
if(a>b&&a>c)
printf("a is greater");
if(b>c)
printf("b is greater");
else
printf("c is greater");
}