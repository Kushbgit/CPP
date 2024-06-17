#include <iostream>
using namespace std;

class Student{
    public:
         static string institute_name;
};
string Student::institute_name="Cybrom";

int main(){
    Student s1,s2,s3,s4,s5;

    Student::institute_name="Cybrom Academy";
    cout<<s1.institute_name<<endl;
    cout<<s2.institute_name<<endl;
    cout<<s3.institute_name<<endl;
    cout<<s4.institute_name<<endl;
    cout<<s5.institute_name<<endl;
}