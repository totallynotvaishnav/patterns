#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    cout << r << c << endl;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (!(i == 0 || i == r - 1))
            {
                if (j == 0 || j == (c - 1))
                {
                    cout << "* \t";
                }
                else
                {
                    cout << '\t';
                }
            }
            else
            {
                cout << "* \t";
            }
        }
        cout << endl;
    }
    return 0;
}