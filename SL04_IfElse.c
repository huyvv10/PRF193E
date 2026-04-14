#include <stdio.h>

int main(){
	int age;
	printf("Input your age: "); scanf("%d", &age);
	
	if (age>=18)
		printf("She is %d years old. She can get married",age);
	else
		printf("Be careful. She is under 18.");	
	return 0;
}
