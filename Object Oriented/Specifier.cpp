#include <iostream>
using namespace std;

class Student{
    private:                                                         //Access specifier
    int Roll;                                                       //Data member
    string Name,Stream;  

Student(){                                                      //default
       cout<<"Enter Roll, Name, Stream :";
       cin>>Roll>>Name>>Stream;
    }             
    
    void getter(){                                                 //Member f()                    
        cout<<"Name :"<<Name<<endl<<"Roll Number :"<<Roll<<endl;
        cout<<"Stream :"<<Stream<<endl;
    }
};

int main(){
    Student s1,s2,s3;
    s1.getter();
    s2.getter();
    s3.getter();
}