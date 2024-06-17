#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    string ch;
    while (1)
    {
        cout << "Enter Number1 and Number2 :";
        cin >> n1 >> n2;
        cout << "sum:" << n1 + n2 << endl;
        cout << "Do you want to continue: 'Yes' or No' :";
        cin >> ch;
        if (ch == "Yes")
        {
            continue;
        }
        else if (ch == "No")
        {
            cout << "Thank you for using our services";
            break;
        }
    }
}