#include <stdio.h>
#include <string.h>

int main(){
	char str[]="My name is Huy";
	printf("The length of string is %d", strlen(str));
	
	char S1[50];
//	S1 = "Xin chao cac ban";	
	strcpy(S1,"Xin chao cac ban");
	printf("\nXau S1: ");
	puts(S1);
	return 0;
}
