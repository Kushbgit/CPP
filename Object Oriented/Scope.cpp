#include<iostream>
using namespace std;
 
 int i=989;                    //Global variable
 
  int main(){
    int i=90;
if (i){
    int i=23;                 //LOcal Variable if   
}
for (int i=1;i<=10;i++){
    cout<<i<<endl;            //Local Variable for
}
cout<<"local: "<<i<<endl;     // Local Variable main
cout<<"Global: "<<::i;
  }