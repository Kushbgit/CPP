#include <iostream>
using namespace std;

int main(){
    int l,b,r;
    char ch;
    do{
        cout<<"\n        AREA FINDER          \n";
        cout<<"R for Rectangle\n";
        cout<<"C for Circle\n";
        cout<<"E for Exit\n";
        cout<<"Enter Your Choice:";
        cin>>ch;
        switch(ch){
            case 'R':cout<<"Enter l and b:";
            cin>>l>>b;
            cout<<"Area of Rectangle:"<<l*b;break;
            case 'C':cout<<"Enter Radius:";
            cin>>r;
            cout<<"Area of Cricle:"<<3.14*r*r;break;
            case 'E':cout<<"Thank You for using our service....!";
            break;
            default:cout<<"Invalid choice. \n Please Enter your choice again\n";
            break;
        }
    }while(ch!='E');
}