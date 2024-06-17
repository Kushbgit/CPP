#include <iostream>
using namespace std;

class A{
    void privatef()
    {cout<<"This is Private Number ";}
public:
void publicf()
{cout<<"This is Public Number ";
privatef();
}
protected: 
void protectedf()
{cout<<"This is Protected Number";}
};
int main(){
    A a;
    a.publicf();
}