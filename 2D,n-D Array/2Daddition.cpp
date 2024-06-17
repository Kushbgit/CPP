#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the Number of Row :";
    cin >> r;
    cout << "Enter the Number of Column :";
    cin >> c;

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the number of Index " << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Number at Index " << i << j << ":" << a[i][j] << endl;
        }
    }
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        sum=sum+a[j][i];
    }
    cout<<"Column sum-->"<<sum<<endl;
    sum=0;

}
