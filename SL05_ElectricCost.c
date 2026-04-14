#include <stdio.h>

int main(){
	int n;
	double cost;
	scanf("%d", &n);
	if (n<=50)
		cost = n*1984;
	else if (n<=100)
		cost = 50*1984 + (n-50)*2050;
	else if (n<=200)
		cost = 50*1984 + 50*2050 + (n-100)*2380;
	else if (n<=300)	
		cost = 50*1984 + 50*2050 + 100*2380 + (n-200)*2998;
	else if (n<=400)
		cost = 50*1984 + 50*2050 + 100*2380 + 100*2998 + (n-300)*3350;
	else 
		cost = 50*1984 + 50*2050 + 100*2380 + 100*2998 + 100*3350 + (n-400)*3460;
	
	printf("Total cost: %.2f", cost*1.1);	
	return 0;
}
