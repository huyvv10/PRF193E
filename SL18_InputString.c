#include <stdio.h>

int main(){
	char str[31];
	printf("Input a string: "); scanf("%[^\n]", &str);
	printf("%s", str);
	
//	getchar();			//Clear buffer
//	printf("\nInput a string abc: "); scanf("%[abc]", &str);
//	printf("%s", str);		
//	
//	fflush(stdin);		//Clear buffer
//	printf("\nInput a string abc: "); scanf("%[^abc]", &str);
//	printf("%s", str);	
//		
//	fflush(stdin);		//Clear buffer
//	printf("\nYour phone number: "); scanf("%10[0-9]", &str);
//	printf("%s", str);
	
	fflush(stdin);		//Clear buffer
	printf("\nInput your string: "); gets(str);
	puts(str);
	
	return 0;
}
