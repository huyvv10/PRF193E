#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* lTrim(char s[]){
	int i=0;
	while (s[i]==' ') i++;
	if (i>0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char s[]){
	int i=strlen(s)-1;
	while (s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}

char* trim(char s[]){
	rTrim(lTrim(s));
	char* ptr = strstr(s," ");
	while(ptr!=NULL){
		strcpy(ptr, ptr+1);
		ptr = strstr(s,"  ");
	}
	return s;
}
int main(){
	char name[31];
	int i,n;
	gets(name);
	
	trim(name);
	strlwr(name);
	n = strlen(name);
	for (i=0; i<n; i++)
		if (i==0 || name[i-1]==' ')
			name[i] = toupper(name[i]);	
	puts(name);
	return 0;
}
