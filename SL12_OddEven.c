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
	printf("\n");	
}
void displayOdd(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==1)
			printf("%d ", a[i]);
	printf("\n");		
}
void displayEven(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==0)
			printf("%d ", a[i]);
	printf("\n");		
}
//Return the position first found of x in the array.
//Return -1 in case find not found.
int findTheFirstPos(int *a, int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos = i; break;
		}
	return pos;	
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArray(arr, n);
	displayArray(arr, n);
	displayOdd(arr, n);
	displayEven(arr, n);
	int x, pos;
	printf("Input searching number: x = "); scanf("%d", &x);
	pos = findTheFirstPos(arr, n, x);
	if (pos>=0)
		printf("The position first found %d in the array is %d", x, pos);
	else 
		printf("Find not found %d in the array", x);	
	return 0;
}
