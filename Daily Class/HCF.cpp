#include <iostream>
using namespace std;
int main()
{
    int n1, n2, small;
    cout << "Enter two Number:";
    cin >> n1 >> n2;
    n1 > n2 ? small = n2 : small = n1;
    for (int i = small; i >= 2; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "Highest Common Factor: " << i;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No Common Factor at all";
    }
}
