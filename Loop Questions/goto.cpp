#include <iostream>
using namespace std;
int main(){
    int i=1, x,y;
    cout<<"Enter the limit :";
    cin>>x;
    cout<<"Enter the table's number :";
    cin>>y;
    start:
    cout<<" "<<i<<"*"<<y<<"="<<i*y<<endl;
    i++;
    if(i<=x){
        goto start;
    
    }
}