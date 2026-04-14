#include <stdio.h>

int main(){
	float mark;
	scanf("%f", &mark);
	int rs;
	rs = mark>=9 ? 1000000 : 0;
	printf("Your mark is %.2f, thus your reward is %d vnd", mark, rs);
	return 0;
}
