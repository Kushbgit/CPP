// WAP to create a array of n elements and defined the following f()as well.
// b.Highest()

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

void highest(int a[], int size)
{
    int high = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > high)
            high = a[i];
    }
    cout << "\n Highest:" << high<<endl;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    create(a, size);
    highest(a, size);
    
}