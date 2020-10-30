#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows \t";
    cin >> r;

    for (int i = 1; i <= r; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}