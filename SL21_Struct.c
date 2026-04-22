#include <stdio.h>
#include <string.h>
typedef struct{
	char id[9];
	char name[31];
	int age;
	float grade;
} Student;

void showStd(Student sv){
	printf("%-10s %-25s %-5d %5.2f\n", sv.id, sv.name, sv.age, sv.grade);
}

void title(){
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Grade");
	printf("%-10s %-25s %-5s %5s\n", "--", "----", "---", "-----");
}
int main(){
	Student sv1;
	strcpy(sv1.id, "He200001");
	strcpy(sv1.name, "Vu Van Huy");
	sv1.age = 18;
	sv1.grade = 8.5;

	title();
	showStd(sv1);
	
	Student sv2 = {"He201002", "Nguyen Nhat Minh", 21, 7};
	showStd(sv2);
	return 0;
}
