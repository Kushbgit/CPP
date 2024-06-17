#include <iostream>
using namespace std;

int main(){
    int n,high,num;
    cout<<"Enter Limit:";
    cin>>n;

    cout<<"Enter Number:";
    cin>>num;
    high=num;
    for(int i=1;i<n;i++){
        cout<<"Enter Number:";
        cin>>num;
        if(num>high){
            high=num;
        }
    }
    cout<<"Highest Value:"<<high;
}