/*
→ TOPIC - FUNCTION
→ DEFINATION - Set of Instructions. Part of Program (Sub Program)
*/

#include <iostream>
using namespace std;

// Function Prototypes
void msg();
void sum();

int main()
{
    msg();   // Calling msg()

    cout << "\nC Developed by Dennis Ritchie" << endl;

    msg();

    cout << "\nC Developed in 1972" << endl;

    msg();

    sum();   // Calling sum()

    return 0;
}

// Function Definition
void msg()
{
    cout << "\nHello User";
    cout << "\nWelcome to C++";
}

// Function Definition
void sum()
{
    int n1, n2, r;

    cout << "\nEnter 2 numbers: ";
    cin >> n1 >> n2;

    r = n1 + n2;

    cout << "Sum = " << r << endl;
}