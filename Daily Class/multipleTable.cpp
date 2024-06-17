#include <iostream>
using namespace std;
int main()
{
    int upper, lower;
    cout << "Enter Lower and Upper Limit: ";
    cin >> lower >> upper;
    for (int j = lower; j <= upper; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << j << "X" << i << "=" << j * i << endl;
        }
        cout<<"\n========================\n";
    }
}
