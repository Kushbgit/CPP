#include <iostream>
using namespace std;

int main(){
    int num,flag=0;
    cout<<"Enter Number: ";
    cin>>num;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}