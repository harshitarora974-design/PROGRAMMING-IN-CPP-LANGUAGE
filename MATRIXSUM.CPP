
→ AIM - to do sum of two matrix

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    // Matrix addition
    cout << "\nTotal sum of two matrices is:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}











