#include <stdio.h>
#include <iomanip>
#include "Student.h"

//Default constructor
Student::Student() {
	this->id=0;
	this->name="SV FPT";
	this->age=18;
	this->grade=-1;
}

//Argument constructor
Student::Student(int _id, string _name, int _age, float _grade) {
	this->id=_id;
	this->name=_name;
	this->age=_age;
	this->grade=_grade;
}

//Deconstructor
Student::~Student() {}

int Student::getId() const {
	return this->id;
}
void Student::setId(int newId) {
	this->id=newId;
}
string Student::getName() const {
	return this->name;
}
void Student::setName(const string &newName) {
	this->name=newName;
}
int Student::getAge() const {
	return this->age;
}
void Student::setAge(int newAge) {
	if (newAge>0 && newAge<=150)
		this->age=newAge;
	else
		cout<<"Invalid age"<<endl;
}
float Student::getGrade() const {
	return this->grade;
}
void Student::setGrade(float newGrade) {
	this->grade=newGrade;
}

void Student::displayStd() {
	cout<<left<<setw(4)<<id
	    <<setw(25)<<name
	    <<setw(5)<<age
	    <<right<<setw(5)<<grade<<endl;
}

void Student::inputStd() {
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