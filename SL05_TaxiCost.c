#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if (n<3)
		printf("Total cost: %d", 15000*n);
	else if (n<10)	
		printf("Total cost: %d", 12000*n);
	else
		printf("Total cost: %d", 11000*n);
		
	return 0;
}
