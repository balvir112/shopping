#include <iostream>
#include <string>

using namespace std;

class Teacher{
    private:
       double salary;

    public:
      string name;
      string subject;
      string dept ;

      //non parameterized constructor
        Teacher(){
           dept = "CSE";
        }      

     //parameterized constructor
        Teacher(string n, double s , string d){
            name = n;
            salary = s;
            dept = d;
        }

        //  //parameterized constructor
        // Teacher(string name, double salary , string dept){
        //     this->name = name;
        //     this->salary = salary;
        //     this->dept = dept;
        // }


        //copy constructor
        Teacher(const Teacher &orgObj){
            this->name = orgObj.name;
            this->salary = orgObj.salary;
            this->dept = orgObj.dept;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Department: " << dept << endl;
        }

        void changeDept(string newDept){
            dept = newDept;  
        }
};




int main(){
    Teacher t1("John", 300000,"Computer Science");
    // t1.display();

    Teacher t2(t1); //default copy constructor will be invoked if no custom copy constructor is defined
        t2.display();

    return 0;
}