#include <iostream>
using namespace std;
int main(){
    int n, limit;
    cout<<"Enter an number : ";
    cin>>n;
    cout<<"Enter Limit : ";
    cin>>limit;
    for(int i=1;i<=limit;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

}