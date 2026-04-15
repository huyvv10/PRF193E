#include <stdio.h>
int USCLN(int a, int b){
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;	
	}	
	return a;
}
int BSCNN(int a, int b){
	int ucln, tg, small, big;
	ucln=USCLN(a,b);
	small = a>b ? b : a;
	big = a>b ? a : b; 
	return small*(big/ucln);	
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("USCLN cua %d va %d la %d\n", a, b, USCLN(a,b));
	printf("BSCNN cua %d va %d la %d", a, b, BSCNN(a,b));	
	return 0;
}
