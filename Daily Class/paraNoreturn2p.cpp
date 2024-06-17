#include<iostream>
using namespace std;

void full_name(string,string); //prototype
int main(){
    string name,surname;
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter Surname :";
    cin>>surname;
    full_name(name,surname);
}
void full_name(string name,string surname){
    cout<<name<<" "<<surname;
}