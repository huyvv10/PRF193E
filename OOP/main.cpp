#include <iostream>
#include <iomanip>
#include <vector>
#include "Student.h"

using namespace std;

class StudentManagement {
	public:
		vector<Student> stdList;
		StudentManagement() {}
		
		void addNewStudent() {
			Student s;
			s.inputStd();
			stdList.push_back(s);
		}
		
		void title() {
			cout<<left<<setw(4)<<"ID"
			    <<setw(25)<<"Name"
			    <<setw(5)<<"Age"
			    <<right<<setw(5)<<"Grade"<<endl;
			cout<<string(39,'-')<<endl;
		}
		void displayStdList() {
			for (auto &sv : stdList) {
				sv.displayStd();
			}
		}
		//Display student whose grade >= xGrade
		void displayStdByGrade(float xGrade){
			for (auto &sv : stdList) {
				if (sv.getGrade()>=xGrade)
					sv.displayStd();
			}			
		}
};
int main() {
//Using Stack memory
	int n;
	StudentManagement sm;
	cout<<"Input number of students: ";
	cin>>n;
	for (int i=0; i<n; i++)
		sm.addNewStudent();
	sm.title();	
	sm.displayStdList();
	cout<<endl;
	float xGrade;
	cout<<"Input grade threshold: "; cin>>xGrade;
	sm.title();
	sm.displayStdByGrade(xGrade);
	return 0;
}
