 
#include<iostream>
#include<string>
using namespace std;

//  1: Student
class Student {
public:
    string Name;
    int Rollno;
    void inputStudent(){
    	cout<<"Enter Student Name:";
    	cin>>Name;
    	cout<<"Enter Student Roll:No:";
    	cin>>Rollno;
    	
	}

    void DisplayStudent() {
    	cout<<"\n------Student Details-------"<<endl;
        cout << "Name: " << Name <<endl;
		cout <<"Rollno: " << Rollno << endl;
    }
};

//  2: Faculty
class Faculty {
public:
    string Name;
    string Department;
void InputFaculty(){
	cout<<"Enter Faculty Name:";
	cin>>Name;
	cout<<"Enter Department Name:";
	cin>>Department;
}
    void DisplayFaculty() {
    	cout<<"\n----------Faculty Details-----"<<endl;
        cout << "Name: " << Name <<endl;
		cout<< "Department: " << Department << endl;
    }
};

// 3: Course
class Course {
public:
    string Name;
    int Credits;
    void InputCourse(  ){
    	cout<<"Enter Course Name:";
    	cin>>Name;
    	cout<<"Enter Subject Credits:";
    	cin>>Credits;
	}

    void DisplayCourse() {
    	cout<<"\n------CourseDetails--------";
        cout << "Name: " << Name << endl;
	cout	<<"Credits: " << Credits << endl;
    }
};

//  4: Department
class Department {
public:
    string Name;
    string Head;
    void InputDepartment(){
    	cout<<"Enter Department Name:";
    	cin>>Name;
    	cout<<"Enter Head Name:";
    	cin>>Head;
	}

    void DisplayDepartment() {
    	cout<<"\n-----Department Details----"<<endl;
        cout << "Name: " << Name << endl;
		cout<<" Head: " << Head << endl;
    }
};

//  5: University
class University {
public:
    string Name;
    string Location;
void inputUniversity(){
	cout<<"Enter University Name:";
	cin>>Name;
	cout<<"Enter University location:";
	cin>>Location;
	
}
    void displayUniversity() {
    	cout<<"\n---------UniversityDetails---------"<<endl;
        cout << "Name: " << Name <<endl;
		cout<< " Location: " << Location << endl;
    }
};

int main() {
    
    Student s;
    Faculty f;
    Course  c;
    Department d;
    University u;
    
    s.inputStudent();
    f.InputFaculty();
    c.InputCourse();
    d.InputDepartment();
    u.inputUniversity();
    
    
    s.DisplayStudent();
    f.DisplayFaculty();
    c.DisplayCourse();
    d.DisplayDepartment();
    u.displayUniversity();
    

    return 0;
}


