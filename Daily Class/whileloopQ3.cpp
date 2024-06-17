#include <iostream>
using namespace std;

int main()
{
    int n1, count_p = 0, count_n = 0, count_z = 0;
    string ch;
    while (1)
    {
        cout <<"Enter Number:";
        cin >> n1;
        if (n1 > 0)
        {
            count_p++;
        }
        else if (n1 < 0)
        {
            count_n++;
        }
        else
        {
            count_z++;
        }
        cout << "Do you want to continue: 'Yes' or No' :";
        cin >> ch;
        if (ch == "Yes")
        {
            continue;
        }
        else if (ch == "No")
        {
            break;
        }
    }
    cout << "Positive:" << count_p << endl;
    cout << "Negative:" << count_n << endl;
    cout << "Zero:" << count_z << endl;
}