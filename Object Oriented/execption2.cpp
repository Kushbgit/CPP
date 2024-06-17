//WAP to determine multiple catch statement, in which you have to divide two number, show thew result 
//and ask user to continue if they wish to.
// 23/0 = infinite(not determine)
//0/23 = 0.

#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    string msg;
    
    try{
        while(1){
            cout<<"Enter Numerator :";
            cin>>n1;
            cout<<"Enter Denominator :";
            cin>>n2;
            if(n2==0)
            throw n2;
            cout<<"Division: "<<n1/(float)n2<<endl;
            cout<<"Do you want to continue, 'YES' or 'NO' :";
            cin>>msg;
            if(msg=="NO")
                   break;
            else if(msg=="YES")
                   continue;
            else
            throw msg;
        }
    }
    catch(int a){
        cout<<"Denominator can't be ZERO ";
    }
    catch(string a){
        cout<< msg <<" is invalid choice";
    }
}