
→ TOPIC - MATRIX 

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
            cout << "Enter element of matrix: ";
            cin >> a[i][j];
        }
    }

    // Display the matrix
    cout << "\nYour output is:\n" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}







