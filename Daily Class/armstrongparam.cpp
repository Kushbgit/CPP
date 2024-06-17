#include<iostream>
using namespace std;

string armstrong(int num){

    int temp=num,last,sum=0;
    while(num>0){
        last=num%10;
        sum=sum+(last*last*last);
        num=num/10;
    }
    if(temp==sum)
    return "Yes!";
    else 
    return"No..!!";
}
int main(){
    int number;
    cout<<"Enter Test Number :";
    cin>> number;
    cout<<armstrong(number)<<endl;       //formal paramter
    //cout<<armstrong(153)<<endl;       //actual argument
   // cout<<armstrong(234)<<endl;
    //cout<<armstrong(370)<<endl;
}