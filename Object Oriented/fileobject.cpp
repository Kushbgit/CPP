#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream wr("C:\\Users\\HP PC\\Web Stack\\Text1.txt");
    wr<<"Apple is good for health.\n";
    wr<<"This is just a message";

    wr.close();
}