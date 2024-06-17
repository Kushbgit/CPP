#include <iostream>
using namespace std;

class Cybrom{
    int enroll;
    public:
    static int count_objects;
    static string address;
    
    Cybrom(){
        count_objects++;
    }
    static void display(){
        cout<<count_objects;
        cout<<address;
    }
};
int Cybrom::count_objects=0;
string Cybrom::address=" Bhopal";

int main(){
    Cybrom c1,c2,c3,c4;
    cout<<Cybrom::count_objects<<endl;
    c1.display();
}
