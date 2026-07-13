
→ AIM - product of two matix

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    // Input first matrix
    cout << "Enter elements of 1st matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of 2nd matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    // Matrix multiplication
    cout << "\nProduct of Matrix A and Matrix B is:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j]; // FOR MATRIX PRODUCT 
            }

            cout << c[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}










