#include <stdio.h>
//Bang cuu chuong
int main(){
	int n, i; 
	scanf("%d", &n);
	for (i=1; i<=10; i++)
		printf("%d x %d = %d\n", n, i, n*i);
	printf("\n");
	int j;
	for (i=0; i<=10; i++){
		for (j=1; j<=9; j++)
			printf("%d x %d = %d\t", i, j, i*j);
		printf("\n");	
	}
			
	
	return 0;
}
