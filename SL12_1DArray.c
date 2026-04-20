#include <stdio.h>

int main(){
	int n = 3;
	//Cach 1
	int a[n];
	a[0]=9;
	a[1]=4;
	a[2]=6;
	
	//Cach 2
	int b[]={5,9,6,4,8};
	
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
	for (i=0; i<5; i++)
		printf("%d ", b[i]);		
	return 0;
}
