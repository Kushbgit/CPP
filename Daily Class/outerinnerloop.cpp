#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=2;i++){
        cout<<"Outer Loop Iteration Number: "<<i<<endl;
        for(int j=1;j<=4;j++){
            cout<<"Inner Loop Iteration Number: "<<j<<endl;
        }
    }
}