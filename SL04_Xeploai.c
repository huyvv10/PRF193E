#include <stdio.h>

int main() {
	float m, e, p, gpa;
	scanf("%f%f%f", &m, &e, &p);
	gpa = (m+e+p)/3;
	printf("OUTPUT\n");
	printf("Your gpa is %.2f\n", gpa);
	if (gpa>=9)
		printf("You are excellence.");
	else if (gpa>=8)
		printf("You are good.");
	else if (gpa>=7)
		printf("You are well.");
	else if (gpa>=5)
		printf("You are fair.");
	else
		printf("You are poor.");
	return 0;
}
