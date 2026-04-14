#include <stdio.h>

int main() {
	int n;
	printf("Nhap giai ma ban dat duoc: ");
	scanf("%d", &n);

	switch (n) {
		case 1:
			printf("Giai nhat, 1000000 vnd.");
			break;
		case 2:
			printf("Giai nhi, 500000 vnd.");
			break;
		case 3:
			printf("Giai ba, 200000 vnd.");
			break;
		case 4:
			printf("Giai khuyen khich, 10000 vnd.");
			break;
		default:
			printf("Chuc ban may man lan sau.");
	}
	return 0;
}
