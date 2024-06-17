#include<iostream>
using namespace std;
void create(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<"Enter number for Index"<<i<<": ";
        cin>>a[i];
    }
    cout<<"Value print at Create()\n";
    for(int i=0;i<size;i++){
        cout<<"Number at index"<<i<<":"<<a[i]<<endl;
    }
}

void print_odd(int a[], int size){
    cout<<"odd............\n";
    for(int i=0;i<size;i++){
        if(a[i]%2!=0)
        cout<<a[i]<<" stored at Index"<<endl;
    }
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    create(a, size);
    //highest(a, size);
    print_odd(a, size);
   
}