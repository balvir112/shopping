#include<iostream>
#include<string>

using namespace std;

class Student{
    public:
    string name;
    int rollno;
};

class Teacher{
    public:
    int salary;
    string subject;
};

class TA : public Student, public Teacher{  // multiple inheritance
    public:
    int hours;
};

int main(){
    TA t1;
    t1.name = "pawan";
    t1.rollno = 101;
    t1.salary = 50000;
    t1.subject = "Maths";
    t1.hours = 5;

    cout<<"Name : "<<t1.name<<endl;
    cout<<"Roll No : "<<t1.rollno<<endl;
    cout<<"Salary : "<<t1.salary<<endl;
    cout<<"Subject : "<<t1.subject<<endl;
    cout<<"Hours : "<<t1.hours<<endl;

    return 0;

}