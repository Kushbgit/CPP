#include <iostream>
using namespace std;
 
class Student{
    private: 
    char grade;
    string name;
    
    public:
      void setter(){
        cout<<"Enter Name and Grade: ";
        cin>>name>>grade;
      }
       void display(){
        cout<<"Name: "<<name<<" ,Grade: "<<grade;
       }
};
 int main(){
    Student s,s1,s2,s3;
    s.setter();
    s.display();
 }