#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter Range:";
    cin>>n;
     
     {
        cout<<"+";
        sum=sum+1;
     }
     sum=sum+n;
     cout<<n<<"="<<sum;
 }