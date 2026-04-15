#include <stdio.h>

int main(){
	int i,n,S=1;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		S *= i;		//S = S*i;
	printf("%d! = %d", n, S);	
	return 0;
}
