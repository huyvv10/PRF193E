#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
	private:
		int id;
		string name;
		int age;
		float grade;
	public:
		//Default constructor
		Student();

		//Argument constructor
		Student(int _id, string _name, int _age, float _grade) ;

		//Deconstructor
		~Student();

		int getId() const;
		void setId(int newId);
		string getName() const ;
		void setName(const string &newName);
		int getAge() const ;
		void setAge(int newAge) ;
		float getGrade() const ;
		void setGrade(float newGrade);

		void displayStd() ;
		void inputStd() ;
};

#endif