#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter Number : ";
    cin>>n;
    
    try{
        if(n<0){
            throw n;
        }
        for(int i=n;i>=1;i--){
            fact=fact*1;
        }
        cout<<"Factorial of"<<n<<" "<<fact;
    }
    catch(int a){
        cout<<"Number"<<a<<" can't be Negative";
    }
}