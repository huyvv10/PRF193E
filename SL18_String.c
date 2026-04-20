#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "FPT University";
	printf("%s\n", str);		//Case 1 to output a string
	
	puts(str);					//Case 2 to output a string
	
	int i;
	for (i=0; i<strlen(str); i++)
		printf("%c", str[i]);	//Case 3 to output a string
	return 0;
}
