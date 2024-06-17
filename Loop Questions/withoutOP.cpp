#include <iostream>
using namespace std;
int main(){
    int x,y, z=0,i;
    cout<<"Enter the Numbers :";
    cin>>x>>y;
    for(i=0;i<x;i++){
        z= z+y;
    }
    cout<<"Multipication of Two Number is :"<<z;
}