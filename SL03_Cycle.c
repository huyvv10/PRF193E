#include <stdio.h>
#define PI 3.14159

int main(){
	double r, per, area;
	const float pi = 3.14159;
	
	scanf("%lf", &r);
	per = 2*PI*r;
	area = PI*r*r;
	printf("OUTPUT\n");
	printf("%lf", per);
	printf("\n%lf", area);
	return 0;
}
