#include <stdio.h>

int main(){
	int n, i, S=0; 
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		S+=i;			//S = S + i;
	printf("OUTPUT\n");
	printf("%d", S);	
	return 0;
}
