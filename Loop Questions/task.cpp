// WAP to display the result according to following conmdition.
// 1-10 and 11-20;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number between 1-20 = ";
    cin >> n;
    if (n >= 1 && n <= 10)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << endl;
        }
    }

    else if (n >= 11 && n <= 20)
    {
        for (int i = 20; i >= 1; i--)
        {
            cout << i << endl;
        }
    }
}
