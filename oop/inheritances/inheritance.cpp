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


    Student(string name , int age , int rollno) : Person(name, age){
        // cout<<"Student constructor called"<<endl;

        this->rollno = rollno;
    }

    // ~Student(){
    //     cout<<"Student destructor called"<<endl;
    // }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll No : "<<rollno<<endl;
    }
};

//base class constructor will be called first and then derived class constructor will be called
//derived class destructor will be called first and then base class destructor will be called

// Person constructor called
// Student constructor called
// Name : pawan
// Age : 21
// CGPA : 8.18
// Student destructor called
// Person destructor called

int main(){

    // Student s1;
    // s1.name = "pawan";
    // s1.age = 21;
    // s1.cgpa = 8.18;

    Student s1("pawan",21,37);

    s1.display();



    return 0;
}