#include <iostream>
using namespace std;

int main(){
    int flag=0;
    for (int i=2;i<=200;i++){
        int flag=0;
        for (int j=2;j<i/2;j++){
            if (i%j==0){
                flag=1;
                break;
            }
        }
        if (flag==0)
    cout<<i<<endl;
}
    }
