#include<stdio.h>
#include<conio.h>
void main(){
char ch;
printf("enter the char");
scanf("%c",ch);
if((ch>="A"&&ch<="Z")||(ch>="a"&&ch<"z"))
 printf("alphabet");
   else
    printf("not");
}
