
→ TOPIC - POINTER 

#include <iostream>
using namespace std;

int main()
{
    float x = 10;
    float *ptr;

    cout << "X = " << x << endl;

    cout << "Address of X = " << &x << endl;

    // Value at the address of x
    cout << "X = " << *(&x) << endl;

    // Store the address of x in pointer ptr
    ptr = &x;

    cout << "Address of X = " << ptr << endl;

    cout << "Value of X = " << *ptr << endl;

    // Change the value of x using the pointer
    *ptr = 100;

    cout << "Value of X after modification = " << x << endl;

    return 0;
}




