#include <stdio.h>

int main() {
	int m, y;
	printf("Input a month and a year: ");
	scanf("%d%d", &m, &y);
	switch(m){
		case 1:
			printf("The month %d/%d has 31 days", m,y); break;
		case 3:
			printf("The month %d/%d has 31 days", m,y); break;
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("The month %d/%d has 31 days", m,y); break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The month %d/%d has 31 days", m,y); break;
		case 2:
			if (y%400==0 || ((y%4==0) && y%100!=0))
				printf("The month %d/%d has 29 days", m,y); 
			else	
				printf("The month %d/%d has 28 days", m,y); 
			break;
		default:
			printf("%d is not a month of a year.", m);
	}
	return 0;
}
