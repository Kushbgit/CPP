#include <iostream>
using namespace std;
int main(){
    int numb;
    cout<<"Enter value to print Natural number =";
    cin>>numb;
    cout<<"List of Even Number =";
    for(int i=1;i<=numb;i++){
        if(i%2==0){
            cout<<i<<" ";
        
        }
    }
}