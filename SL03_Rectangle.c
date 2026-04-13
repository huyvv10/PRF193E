#include <stdio.h>

int main(){
	float w, l, per, area;
	scanf("%f%f", &l, &w);
	printf("OUTPUT\n");
	per = (l+w)*2;
	area = l*w;
	printf("%.2f", per);
	printf("\n%.2f", area);
	
	return 0;
}
