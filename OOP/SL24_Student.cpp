#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
class Student {
	private:
		int id;
		string name;
		int age;
		float grade;
	public:
		//Default constructor
		Student() {
			this->id=0;
			this->name="SV FPT";
			this->age=18;
			this->grade=-1;
		}

		//Argument constructor
		Student(int _id, string _name, int _age, float _grade) {
			this->id=_id;
			this->name=_name;
			this->age=_age;
			this->grade=_grade;
		}

		//Deconstructor
		~Student() {}

		int getId() const {
			return this->id;
		}
		void setId(int newId) {
			this->id=newId;
		}
		string getName() const {
			return this->name;
		}
		void setName(const string &newName) {
			this->name=newName;
		}
		int getAge() const {
			return this->age;
		}
		void setAge(int newAge) {
			if (newAge>0 && newAge<=150)
				this->age=newAge;
			else
				cout<<"Invalid age"<<endl;
		}
		float getGrade() const {
			return this->grade;
		}
		void setGrade(float newGrade) {
			this->grade=newGrade;
		}

		void displayStd() {
			cout<<left<<setw(4)<<id
			    <<setw(25)<<name
			    <<setw(5)<<age
			    <<right<<setw(5)<<grade<<endl;
		}


		void displayStd2() {
			cout<<"("<<id<<", "<<name<<", "<<age<<", "<<grade<<")"<<endl;
		}

		void inputStd() {
			cout<<"Id: ";
			cin>>id;
			cin.ignore();			//Clear buffer
			cout<<"Name: ";
			getline(cin,name);
			cout<<"Age: ";
			cin>>age;
			cout<<"Grade: ";
			cin>>grade;
			cin.ignore();			//Clear buffer
		}
};

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
