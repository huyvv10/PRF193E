#include <stdio.h>
#include <string.h>
#define MAX 31

void displayArray(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		puts(S[i]);
}

void inputArray(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
		printf("S[%d] = ", i+1);
		scanf("%[^\n]", &S[i]);	
		getchar();		
//		gets(S[i]);
	}
}
//Search the existing of kw within the list
void searching(char S[][MAX], int n, char *kw){
	int i;
	for (i=0; i<n; i++){
		char tmp[MAX];
		strcpy(tmp,S[i]);
		if (strstr(strupr(tmp),strupr(kw))!=NULL)
			puts(S[i]);
	}
		
}

//Sort the array in ascending order using Bubble sort algorithm
void sortListAsc(char S[][MAX], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(S[j],S[j-1])<0){
				char tmp[MAX];
				strcpy(tmp, S[j]); strcpy(S[j], S[j-1]);
				strcpy(S[j-1], tmp);
			}	
}

//Return the length of the longest element
int getLongestLength(char S[][MAX], int n){
	int i, max=strlen(S[0]);
	for (i=1; i<n; i++)
		if (strlen(S[i])>max) max = strlen(S[i]);
	return max;	
}

void displayTheLongestName(char S[][MAX], int n){
	int i, max = getLongestLength(S,n);
	for (i=0; i<n; i++)
		if (strlen(S[i])==max)
			puts(S[i]);
}
int main(){
	int n;
	char S[][MAX] = {"Tao","Le","Dao","Man","Mo","Hong"};
	displayArray(S,6);	
	printf("\nInput number of elements: "); scanf("%d", &n);
	char name[n][MAX];
	getchar();
	inputArray(name, n);
	printf("\n---Inputed list---\n");
	displayArray(name, n);
	printf("\n---Searching---\n");
	char kw[MAX];
	printf("Input searching keyword: "); gets(kw);
	searching(name, n, kw);
	printf("\n---Sorting Asc---\n");
	sortListAsc(name, n);
	displayArray(name, n);
	printf("\n---The longest elements---\n");
	displayTheLongestName(name, n);
	return 0;
}
