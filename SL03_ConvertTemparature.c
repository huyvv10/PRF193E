#include <stdio.h>

int main(){
	float n,f;
	printf("Input the temperature in Celcius: ");
	scanf("%f", &n);
	printf("The temperature in F: %.2f F degree", n*9/5+32);

	printf("\n\nInput the temperature in Farah: ");
	scanf("%f", &f);
	printf("The temperature in Celcius: %.2f C degree", (f-32)*5/9);

	return 0;
}
