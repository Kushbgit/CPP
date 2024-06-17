#include <iostream>
using namespace std;

class Cybrom{
    public:
    static int count_objects;
    
    Cybrom(){
        count_objects++;
    }
};
int Cybrom::count_objects=0;

int main(){
    Cybrom c1,c2,c3,c4v;
    cout<<Cybrom::count_objects;
}
