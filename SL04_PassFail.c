#include <stdio.h>

int main(){
	float m, e, p,avg;
	scanf("%f%f%f", &m, &e, &p);
	avg=(m+e+p)/3;
	printf("OUTPUT\n");
	printf("Your gpa: %.2f", avg);
	if (avg>=5){
		printf("\nPass.");
	} else {
		printf("\nFail.");		
	}
		
	return 0;
}
