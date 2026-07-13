
→ TOPIC - ARRAY 


#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int i;

    // Input array elements
    for (i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    // Display array elements
    cout << "\nYour array elements are:" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

// ASSIGNMENTS

→ 1. enter 10 elements in array and print sum of its element.
→ 2. enter 10 elements in array and print it in reverse order
enter 10 element in array and print biggest element
enter 10 elements in array and search an element
