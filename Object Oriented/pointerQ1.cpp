#include <iostream>
using namespace std;

int main(){
    int a=90,b=45,*p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"Address of a:"<<p1<<endl;
    cout<<"Data at a:"<<*p1<<endl;
    cout<<"Address of b:"<<p2<<endl;
    cout<<"Data at a:"<<*p2<<endl;

    if(*p1>*p2)
    cout<<*p1<<" - is  Greatest";
    else
    cout<<*p2<<" - is Greatest";
}