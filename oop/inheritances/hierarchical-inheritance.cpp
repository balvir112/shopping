#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name , int age){
        this->name = name;
        this->age = age;
    }

    Person(){
        cout<<"Person constructor called"<<endl;
    }

    // ~Person(){
    //     cout<<"Person destructor called"<<endl;
    // }
};


class Student : public Person{
    public:
    int  rollno;
};

class Teacher : public Person{
    public:
    int salary;
    string subject;
};


int main(){
    Student s1;
    s1.name = "pawan";
    s1.age = 21;
    s1.rollno = 101;

    Teacher t1;
    t1.name = "sujit";
    t1.age = 30;
    t1.salary = 50000;
    t1.subject = "Maths";

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"Roll No : "<<s1.rollno<<endl;

    cout<<"Name : "<<t1.name<<endl;
    cout<<"Age : "<<t1.age<<endl;
    cout<<"Salary : "<<t1.salary<<endl;
    cout<<"Subject : "<<t1.subject<<endl;

    return 0;
}