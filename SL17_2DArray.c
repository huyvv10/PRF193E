#include <stdio.h>
#define MAX 10
void input2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
}

void displayMainDiagonal(int a[][MAX], int r, int c){
	int i, d;
	d = r>c ? c : r;
	for (i=0; i<d; i++)
		printf("%d ", a[i][i]);
}

int getMaxValueOfMainDiagonal(int a[][MAX], int r, int c){
	int i, d, max=a[0][0];
	d = r>c ? c : r;
	for (i=1; i<d; i++)
		if (a[i][i]>max) max=a[i][i];
	return max;
}

void displaySubDiagonal(int a[][MAX], int r, int c){
	int i, d;
	d = r>c ? c : r;
	for (i=0; i<d; i++)
		printf("%d ", a[i][d-i-1]);	
}

void calculateByRows(int a[][MAX], int r, int c){
	int i,j, S;
	for (i=0; i<r; i++){
		S=0;		//Reset S to zero
		for (j=0; j<c; j++) S += a[i][j];
		printf("%d ", S);	
	}
}

void calculateByColumns(int a[][MAX], int r, int c){
	int i,j, S;
	for (i=0; i<c; i++){
		S=0;		//Reset S to zero
		for (j=0; j<r; j++) S += a[j][i];
		printf("%d ", S);	
	}	
}
int main(){
	int m, n;
	int arr[MAX][MAX];
	
	scanf("%d%d", &m, &n);
	input2DArray(arr, m, n);
	display2DArray(arr, m, n);
	printf("\nMain diagonal: ");
	displayMainDiagonal(arr, m, n);
	printf("\nMaximum value of main diagonal: %d", getMaxValueOfMainDiagonal(arr, m, n));
	printf("\nSub diagonal: ");
	displaySubDiagonal(arr,m,n);
	printf("\nTotal each row: ");
	calculateByRows(arr, m, n);
	printf("\nTotal each column: ");
	calculateByColumns(arr, m, n);
	return 0;
}
