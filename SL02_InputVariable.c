#include <stdio.h>

int main(){
	char c1;
	int n;
	float gpa;
	double salary;
	
	printf("Input a character: "); scanf("%c", &c1);
	printf("Input integer number n= "); scanf("%d", &n);
	printf("Input your gpa = "); scanf("%f", &gpa);
	printf("Input your salary = "); scanf("%lf", &salary);
	
	printf("\nInputed character: %c", c1);
	printf("\nInputed number: %d", n);
	printf("\nInputed gpa: %.2f", gpa);
	printf("\nInputed salary: %.2lf", salary);
	return 0;
}
