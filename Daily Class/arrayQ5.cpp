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
void swap_first_last(int a[],int size){
    int temp=a[0];
    a[0]=a[size-1];
    a[size-1]=temp;
    cout<<"After Swapping:\n";
    for(int i=0;i<size;i++){
        cout<<"Number at Index "<<i<<":"<<a[i]<<endl;
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
    //print_odd(a, size);
   swap_first_last(a, size);
}