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

        for (int j = 0; j < r; ++j)
        {
            if (j < r - i - 1)
            {
                cout << "\t";
            }
            else
            {
                cout << "\t*";
            }
        }

        cout << endl;
    }
}