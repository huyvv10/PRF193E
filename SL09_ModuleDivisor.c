#include <stdio.h>

void listDivisors(int n){
	int i;
	for (i=1; i<=n/2; i++)
		if (n%i==0)
			printf("%d ", i);
	printf("%d", n);	
}

//Summation all divisors of n
int sumDivisors(int n){
	int i, S=0;
	for (i=1; i<=n/2; i++)
		if (n%i==0) S+=i;
	return S+n;		
}
int main(){
	int n;
	scanf("%d", &n);
	listDivisors(n);	//call void module
	printf("\nTotal value of all divisors of %d is: %d", n, sumDivisors(n));
	return 0;
}
