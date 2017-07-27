#include <stdio.h>
int main(void) {
	char n[100];
	gets(n);
	int i;
	i=ntoi(n);
	printf("%d",n);
	return 0;
}
