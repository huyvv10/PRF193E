#include <stdio.h>

int main(){
	char c;
	int n, i;
	scanf("%c%d", &c, &n);
	
	for (i=0; i<n; i++)
		printf("%c \t %d \t %o \t %x\n", c+i, c+i, c+i, c+i);
	return 0;
}
