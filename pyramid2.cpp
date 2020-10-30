#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows \t";
    cin >> r;
    c = r;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << "* \t";
        }
        cout << endl;
    }
}