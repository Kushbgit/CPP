#include <iostream>
using namespace std;
int main()
{
    int numb;
    cout<< "Enter Number: ";
    cin>>numb;
    for (int i=10;i>=1;i--)
        {
            cout<<numb<<"x"<<i<<"="<<numb*i<<endl;
        }
    
}