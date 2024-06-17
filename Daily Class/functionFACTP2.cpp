// WAP to create a function ----> factorial()
//paramter int(input)
//return int(result)
#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=a;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main (){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<fact(n);
}