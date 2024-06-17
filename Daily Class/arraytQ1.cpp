//WAP to search for a element in a array of n numbers
//firstly you habe to create an array , then apply searching operation.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Array :";
    cin>>size;
    int a[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the value for Index :"<<i<<" ";
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        cout<<"The value at Index :"<<i<<" :"<<a[i]<<endl;
    }
    cout<<endl;
    cout<<"{ ";
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"} ";
}
