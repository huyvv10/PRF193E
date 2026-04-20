#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ",i); scanf("%d", &a[i]);
	}
}

void displayArray(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}

void displayReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr, n);
	displayArray(arr,n);	
	int b[]={5,9,6,4,8};
	printf("\n");
	displayArray(b,5);
	printf("\n");
	displayReverse(arr,n);
	return 0;
}
