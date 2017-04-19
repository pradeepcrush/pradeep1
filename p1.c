#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",n);
    if(n>0)
        printf(" positive",n);
    else if(n<0)
        printf(" negative",n);
    else
        printf(" zero",n);

}
