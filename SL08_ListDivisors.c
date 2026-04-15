#include <stdio.h>

int main(){
	int i,n,S=0,count=0;
	scanf("%d", &n);
	for (i=1; i<=n/2; i++)
		if (n%i==0){
			printf("%d ", i);
			S+=i;		//S = S+i;
			count++;
		}

	printf("%d\n", n);
	printf("%d\n", S+n);
	printf("%d", count+1);
		
	return 0;
}
