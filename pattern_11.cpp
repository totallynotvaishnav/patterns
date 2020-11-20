#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows \t";
    cin >> r;
    for (int i = 0; i < r; ++i)
    {
        int el = 1;
        for (int k = 0; k < (r - i - 1); ++k)
        {
            cout << "\t";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << "\t";
            cout << el << "\t";
            ++el;
        }
        for (int k = 0; k < (r - i - 1); ++k)
        {
            cout << "\t";
        }
        cout << endl;
    }
}
