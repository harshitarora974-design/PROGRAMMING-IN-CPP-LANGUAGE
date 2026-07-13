
→ AIM - left/right both diagonal elements of matrix

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;

    // Input matrix elements
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter matrix element: ";
            cin >> a[i][j];
        }
    }

    cout << "\nYour obtained matrix:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)   // Left diagonal
            if (i + j == 2) // Right diagonal
                cout << a[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    return 0;
}





