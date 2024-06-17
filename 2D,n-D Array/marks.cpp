#include <iostream>
using namespace std;
int main()
{
    int st[5][4] = {{23, 44, 55, 34},
                    {21, 4, 5, 34},
                    {23, 43, 5, 4},
                    {23, 44, 55, 34},
                  {3, 4, 88, 34}
                  };
int high,index=0;
for(int i=0;i<5;i++){
    high=st[i][0];
    for(int j=0;j<4;j++){
        if(st[i][j]>high){
            high=st[i][j];
            index=j;
        }
        
    }
    cout<<"Student"<<i+1<<"--> Highest-->"<<high<<endl;
    if(index==0)
    cout<<"Subject:Science\n";
    else if(index==1)
    cout<<"Subject:English\n";
    else if(index==2)
    cout<<"Subject:Hindi\n";
    else if(index==3)
    cout<<"Subject:Maths\n";
}                  

}