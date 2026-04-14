#include <stdio.h>
#include <ctype.h>
int main() {
	char grade;
	printf("Input your grade in letter: ");
	scanf("%c", &grade);

	grade=toupper(grade);
	switch (grade) {
		case 'A':
			printf("Excellence.");
			break;
		case 'B':
			printf("Good.");
			break;
		case 'C':
			printf("Well.");
			break;
		case 'D':
			printf("Fair.");
			break;
		case 'F':
			printf("Poor.");
			break;
		default:
			printf("Invalid grade.");
			break;
	}
	return 0;
}
