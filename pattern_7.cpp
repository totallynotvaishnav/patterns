#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows \t";
    cin >> r;

    for (int i = 1; i <= r; ++i)
    {

        for (int j = 0; j < r * 2; ++j)
        {
            if (j >= i && j < r * 2 - i)
            {
                cout << "\t";
            }
            else
            {
                cout << "* \t";
            }
        }

        cout << endl;
    }

    for (int i = r; i >= 1; --i)
    {

        for (int j = 0; j < r * 2; ++j)
        {
            if (j >= i && j < r * 2 - i)
            {
                cout << "\t";
            }
            else
            {
                cout << "* \t";
            }
        }

        cout << endl;
    }
}
