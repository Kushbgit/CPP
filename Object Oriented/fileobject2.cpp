#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream read("C:\\Users\\HP PC\\Web Stack\\me.txt");
    string st;

    //getline(input_stream_object,string_variable)

    while(getline(read,st)){
        cout<<st<<endl;
    }
}