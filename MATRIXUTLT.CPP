/*
→ AIM -  upper and lower both triangular elements along with diagonal elements of matrix
*/

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

    // Display Upper Triangular Matrix
    cout << "\nUpper Triangular Matrix:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i <= j) // for upper triangular elements including diagonal
            if (i >= j) // for lower triangular elements including diagonal
                cout << a[i][j] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }

    return 0;
}