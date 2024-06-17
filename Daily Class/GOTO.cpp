#include <iostream>
using namespace std;

int main(){
    cout<<"Welcome";
    goto message;
    cout<<"to";
    cout<<"Cybrom";
    
    message:{
        cout<<" to";
        cout<<" C++ Classes.";
    }
}