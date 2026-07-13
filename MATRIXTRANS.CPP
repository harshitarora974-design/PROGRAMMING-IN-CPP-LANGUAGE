
→ AIM - transpose of matrix

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

    // Display transpose of the matrix
    cout << "\nTranspose of the matrix is:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[j][i] << "\t";   // Interchange i and j
        }
        cout << endl;
    }

    return 0;
}






