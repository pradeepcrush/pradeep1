#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    char *rev;
    printf("Enter any string : ");
    scanf("%s",s);
    rev = strrev(s);
   
    printf("Reverse string is : %s",rev);
   
    return 0;
}
