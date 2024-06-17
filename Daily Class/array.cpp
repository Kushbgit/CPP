#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,33,4,5};
    cout<<ar[2];
}


#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,33,4,5,33},n,index;
     cout<<"Enter Number :";
     cin>>n;
     cout<<"Insert Number at Index :"; // greater than size
     cin>>index;
     ar[index]=n;

     //this program may work in some case or not (if memory not available)
}