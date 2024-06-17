#include<iostream>
using namespace std;

class BaseAbstractClass{    //design
    public:
    virtual void f1()=0;      //declaration
    virtual void f2(int a)=0;

    void displaymessage(){
        cout<<"This f() of abstract class only be accessed by child";
    
    }
};
class Derived: public BaseAbstractClass{
    public:
    void f1(){
        cout<<"Implementation of f1 in  derived\n";
    }
    void f2(int a){
        cout<<"Implementation if f2 in derived\n";
    }
};
int main(){
    // BaseAbstractClass obj; // abstract class has no objects
    BaseAbstractClass *base;
    Derived d;
    base=&d;
    base->f1();
    base->f2(3);
    
    return 0;
}

