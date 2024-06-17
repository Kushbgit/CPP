#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){          //i=row
        for(int j=1;j<=5;j++){      //j=column
            if(i==1 || i==5 || j==1 ||j==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}