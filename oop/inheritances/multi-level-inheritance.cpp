#include <iostream>
#include <string>

using namespace std;

// level by level properties are inherited

class Person{
    public:
    string name;    
    int age;
};

class Student : public Person{
    public:
    int rollno;
};

class Marks : public Student{
    public:
    float cgpa;
};

int main(){
    Marks m1;
    m1.name = "pawan";
    m1.age = 21;
    m1.rollno = 101;
    m1.cgpa = 8.18;

    cout<<"Name : "<<m1.name<<endl;
    cout<<"Age : "<<m1.age<<endl;
    cout<<"Roll No : "<<m1.rollno<<endl;
    cout<<"CGPA : "<<m1.cgpa<<endl;

    return 0;
} 