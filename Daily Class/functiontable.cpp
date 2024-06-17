#include<iostream>
using namespace std;

void multiplication_table(int,int);
int main(){
    int u,l;
    cout<<"Enter Lower and Upper :";
    cin>>l>>u;
    multiplication_table(l,u);
}
void multiplication_table(int lower,int upper){
    for(int i=lower;i<=upper;i++){
        for(int j=1;j<=10;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<"\n-----------*------------\n";
    } 
}