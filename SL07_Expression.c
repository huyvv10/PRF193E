#include <stdio.h>

int main(){
	int i,n,S=0;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		printf("%d + ", i);
		S+=i;
	}
	printf("\b\b= %d", S);
	
	printf("\n");
	S=0;
	for (i=0; i<=n; i++){
		if (i==n)
			printf("%d ", i);
		else
			printf("%d + ", i);
		S+=i;
	}
	printf("= %d", S);	
	return 0;
}
