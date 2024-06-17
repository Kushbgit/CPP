#include<iostream>
using namespace std;
//multiple return statement
int bigger(int a,int b,int c){//Formal paramters
if(a>b && a>c)                //a=n1, b=n2, c=n3
return a;
else if(b>a && b>c)
return b;
else
return c;
}

int main(){
    int n1,n2,n3;             //Actual paramters
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;
    cout<<bigger(n1,n2,n3);   //Funtion calling //first procedure


    int result=bigger(n1,n2,n3);                //sencond procedure
    cout<<"\n"<<result;
}