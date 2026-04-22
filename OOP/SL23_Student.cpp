#include <iostream>
#include <iomanip>

using namespace std;
class Student{
	private:
		int id;
		string name;
		int age;
		float grade;
	public:
		//Default constructor
		Student(){
			this->id=0;
			this->name="SV FPT";
			this->age=18;
			this->grade=-1;
		}
		
		//Argument constructor
		Student(int _id, string _name, int _age, float _grade){
			this->id=_id;
			this->name=_name;
			this->age=_age;
			this->grade=_grade;			
		}
		
		//Deconstructor
		~Student(){}
		
		int getId() const { return this->id;}
		void setId(int newId){ this->id=newId;}
		string getName() const {return this->name;}
		void setName(const string &newName){this->name=newName;}
		int getAge() const {return this->age;}
		void setAge(int newAge) {
			if (newAge>0 && newAge<=150)
				this->age=newAge;
			else
				cout<<"Invalid age"<<endl;	
		}
		float getGrade() const { return this->grade;}
		void setGrade(float newGrade){this->grade=newGrade;}

		void displayStd(){
			cout<<left<<setw(4)<<id
					  <<setw(25)<<name
					  <<setw(5)<<age
				<<right<<setw(5)<<grade<<endl;			
		}	
		
		void title(){
			cout<<left<<setw(4)<<"ID"
					  <<setw(25)<<"Name"
					  <<setw(5)<<"Age"
				<<right<<setw(5)<<"Grade"<<endl;
			cout<<string(39,'-')<<endl;				
		}	
		void displayStd2(){
			cout<<"("<<id<<", "<<name<<", "<<age<<", "<<grade<<")"<<endl;
		}
};

//int main(){
////Using Stack memory
//	Student sv1,sv2;
//	sv1.title();
//	sv1.displayStd();
//	sv2.displayStd();
//	sv1.setId(1);
//	sv1.setName("Vu Van Huy");
//	int age;
//	cout<<"Input new age: "; cin>>age;
//	sv1.setAge(age);
//	sv1.setGrade(8.5);
//	cout<<endl;
//	sv1.title();
//	sv1.displayStd();
//		
//	Student sv3(3,"La Bat Vi", 23, 7.3);
//	sv3.displayStd();	
//	return 0;
//}

int main(){
	//Using Heap memory
	Student *sv1 = new Student();
	sv1->title();
	sv1->displayStd();
	
	Student *sv3 = new Student(3,"La Bat Vi", 23, 7.3);
	sv3->displayStd();
	delete sv1;
	delete sv3;
	return 0;
}
