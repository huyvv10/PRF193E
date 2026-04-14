#include <stdio.h>

int main(){
	int n, i; 
	scanf("%d", &n);
	for (i=0; i<=n; i++)
		printf("%d ",i);
	printf("\n");
	for (i=0; i<=n; i+=2)
		printf("%d ",i);
	printf("\n");
	for (i=1; i<=n; i+=2)
		printf("%d ",i);
	return 0;
}
