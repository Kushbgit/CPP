#include <iostream>
using namespace std;
class Person
{
public:
    void common()
    {
        cout << "I am a Common f()\n";
    }
    virtual void display()
    {
        cout << "i am a f() of person class\n";
    }
};
class Emplyoee : public Person
{
public:
    void display()
    {
        cout << "I am a f()of Emplyoee class";
    }
};
int main()
{
    Person p, *base;
    Emplyoee e;
    base=&e;
    base->display();
    base->common();
}

