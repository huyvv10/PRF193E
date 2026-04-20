#include <stdio.h>
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
//Sort the array in ascending order using Selection sort algorithm
void selectionSortAsc(int a[], int n){
	int i, j, minIdx;
	for (i=0; i<n-1; i++){
		minIdx=i;
		for (j=i; j<n; j++)
			if (a[j] < a[minIdx]) minIdx=j;		//Change < to >
		if (i!=minIdx){
			int tg = a[i]; a[i] = a[minIdx]; a[minIdx] = tg;
		}	
	}
}
//Sort the array in descending order using Selection sort algorithm
void selectionSortDesc(int a[], int n){
	int i, j, minIdx;
	for (i=0; i<n-1; i++){
		minIdx=i;
		for (j=i; j<n; j++)
			if (a[j] > a[minIdx]) minIdx=j;		//Change < to >
		if (i!=minIdx){
			int tg = a[i]; a[i] = a[minIdx]; a[minIdx] = tg;
		}	
	}	
}
//Sort the array in ascending order using Bubble sort algorithm
void bubbleSortAsc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] > a[j]){
				int tg = a[j]; a[j] = a[j-1]; a[j-1] = tg;
			}
}
//Sort the array in ascending order using Bubble sort algorithm
void bubbleSortDesc(int a[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] < a[j]){
				int tg = a[j]; a[j] = a[j-1]; a[j-1] = tg;
			}
}
//Return the number appearances of x in the array.
int countFrequency(int a[], int n, int x){
	int i, count=0;
	for (i=0; i<n; i++)
		if (a[i]==x) count++;
	return count;	
}
int main(){
	int n = 12;
	int arr[]={5,6,9,4,8,3,1,9,7,5,1,3};
	display(arr,n);
//	selectionSortAsc(arr, n);
//	display(arr,n);
//	selectionSortDesc(arr,n);
//	display(arr,n);
//	bubbleSortAsc(arr,n);
//	display(arr,n);
//	bubbleSortDesc(arr,n);	
//	display(arr,n);
	int x, rs;
	printf("Input x to count: "); scanf("%d", &x);
	rs = countFrequency(arr, n, x);
	if (rs==0)
		printf("Find not found %d in the array", x);
	else
		printf("The number appearances of %d in the array is %d times", x, rs);	
	return 0;
}
