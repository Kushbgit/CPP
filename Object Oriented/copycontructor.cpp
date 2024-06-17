#include<iostream>
using namespace std; 
class Person{
    string name;
    int age;
  public:
      Person(){
        cout<<"Enter Name and Age: ";
        cin>>name>>age;
      }
      Person(string n,int a){
        name=n;
        age=a;
      }
      Person(Person &obj){      //paramaterized
        name=obj.name;
        age=obj.age;
      }
      void change name(){
        cout<<name<<" "<<age<<endl;
      }
 };
 int main(){
   //Person p,p1,p2;
    Person p3("Rohit", 23);
   p3.display();
   Person p4(p3);               //implicitly create a copy constructor 
   p4.display(); 
 }