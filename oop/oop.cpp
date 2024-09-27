#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
    // string name;
    // double cgpa;

    // Student(string name , double cgpa){
    //     this->name = name;
    //     this->cgpa = cgpa;
    // }  //till we were used static memory allocation but now we are using dynamic memory allocation

    //  void getInfo(){
    //     cout<<"Name : "<<name<<endl;
    //     cout<<"CGPA : "<<cgpa<<endl;

    // }

     string name;
    double* cgpaPtr;

     Student(string name , double cgpa){
        this->name = name;
        cgpaPtr = new double; //here we are allocating memory dynamically
        *cgpaPtr = cgpa;
    }


    Student(Student &orgObj){
        this->name = orgObj.name;
        // this->cgpaPtr = orgObj.cgpaPtr;  //this will make both cgpaPtr point to same memory location

        this->cgpaPtr = new double;  //this will make both cgpaPtr point to different memory location
        *cgpaPtr = *orgObj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;

    }

    ~Student(){
        //default destructor will be called if no custom destructor is defined

        delete cgpaPtr; //deleting the memory allocated dynamically to avoid memory leak
    }



};


int main(){

    Student s1("pawan" , 8.18);

    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.0;    //this will change the cgpa of s1 also as both are pointing to same memory location
    s1.getInfo();
    s2.name="neha";   //this will not change the name of s1 as both are pointing to different memory location
    s2.getInfo();

    return 0;
}
