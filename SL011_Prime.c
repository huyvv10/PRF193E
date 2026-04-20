#include <stdio.h>
#include <stdlib.h>
#include "PrimeLib.c"

int isPrime(int);
void listTheFirstNPrime(int n);
void listPrimeToN(int n);
int countPrimeToN(int n);
void menu();

int main() {
	int n, sel;
	do {
		menu();
		scanf("%d", &sel);
		getchar();	//Clear buffer
		switch (sel) {
			case 1:
				printf("Input n = ");
				scanf("%d", &n);
				listTheFirstNPrime(n); break;
			case 2:
				printf("Input n = ");
				scanf("%d", &n);
				listPrimeToN(n);
				break;
			case 3: 
				printf("Input n = ");
				scanf("%d", &n);
				printf("\nNumber of primes to %d is: %d", n, countPrimeToN(n));			
				break;
			case 0:
				exit(0); break;
			default:
				printf("Invalid selection. Please select again.\n");
		}
	}while (sel!=0);

	return 0;
}

void menu() {
	printf("\n-------------\n");
	printf("1. List the first n prime\n");
	printf("2. List prime to n\n");
	printf("3. Count number of prime\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}

