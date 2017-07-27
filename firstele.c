#include <stdio.h>

int main(void) {
int n,j;
scanf("%d",&n);
int a[n];
for(j=0;j<n;j++)
{
	scanf("%d",&a[j]);
}
for(j=0;j<n;j++)
{
	if(a[j]==a[j+1])
	{
	printf("%d",a[j]);
	break;
	}
}
	// your code goes here
	return 0;
}
