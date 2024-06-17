#include <iostream>
using namespace std;
 
int main(){
    int a[3][2]={{22,33},{4,77},{6,9}};   //00,01,10,11,20,21
    a[0][1]=333;
    cout<<a[1][0]<<endl;
    cout<<a[0][1];
}