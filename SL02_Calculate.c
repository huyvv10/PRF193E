#include <stdio.h>

int main(){
	int m,n;
	printf("m = "); scanf("%d", &m);
	printf("n = "); scanf("%d", &n);
	printf("%d + %d = %lld\n", m, n, (long long)m+n);
	printf("%d - %d = %lld\n", m, n, (long long)m-n);
	printf("%d x %d = %lld\n", m, n, (long long)m*n);
	printf("%d / %d = %f\n", m, n, (float)m/n);
	return 0;
}
