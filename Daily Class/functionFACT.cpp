// WAP to create a function ----> factorial()
//paramter int(input)
//return int(result)
//task :- Find factorial (5=5*4*3*2*1=120)

#include<iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"Enter Number : ";
    cin>>n;

    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
}