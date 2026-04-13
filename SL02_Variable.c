#include <stdio.h>

int main(){
	char c1, c2, c3;
	c1='F';
	c2='P';
	c3='T';
	printf("%c%c%c", c1, c2, c3);
	int m=5, n=7;
	printf("\nm = %d, n = %d", m, n);
	float gpa = 8.5F;
	printf("\nYour gpa = %f", gpa);
	printf("\nYour gpa = %.2f", gpa);
	double grade = 7.8;
	printf("\nYour grade = %.2lf", grade);
	
	return 0;
}
