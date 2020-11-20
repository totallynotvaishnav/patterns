#include <iostream>
using namespace std;

int main()
{
    int r, el = 1;
    cout << "Enter number of rows \t";
    cin >> r;

    for (int i = 0; i < r; ++i)
    {

        for (int j = 0; j <= i; ++j)
        {
            cout << el;
            cout << " \t";
            el = !el;
        }
        if (i % 2 == 0)
        {
            el = 0;
        }
        else
        {
            el = 1;
        }
        cout << endl;
    }
}
