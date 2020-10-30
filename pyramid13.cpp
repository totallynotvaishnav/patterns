#include <iostream>
using namespace std;

//palindromic pattern

int main()
{
    int r;
    cout << "Enter number of rows \t";
    cin >> r;
    for (int i = 1; i <= r; ++i)
    {

        for (int k = 0; k < (r - i); ++k)
        {
            cout << "\t";
        }

        for (int j = i; j > 0; --j)
        {
            cout << "*\t";
        }
        for (int z = 2; z <= i; ++z)
        {
            cout << "*\t";
        }

        cout << endl;
    }
    for (int i = r; i > 0; --i)
    {

        for (int k = 0; k < (r - i); ++k)
        {
            cout << "\t";
        }

        for (int j = i; j > 0; --j)
        {
            cout << "*\t";
        }
        for (int z = 2; z <= i; ++z)
        {
            cout << "*\t";
        }

        cout << endl;
    }
}