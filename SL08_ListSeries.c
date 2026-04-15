#include <stdio.h>

int main(){
	int i,n;
	
	scanf("%d", &n);
	i=n;
	while (i>=0){
		printf("%d ", i);
		i--;
	}
	printf("\n");
	i=0;
	while (i<=n){
		printf("%d ", i);
		i++;
	}
	
	printf("\n---Do loop----\n");
	i=0;
	do{
		printf("%d ", i);
		i++;
	}while (i<=n);
		
	return 0;
}
