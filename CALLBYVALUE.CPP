/*
→ TOPIC - Call By Value
          if any change in formal parameter it does not affect actual  paramater
*/

#include <iostream>
using namespace std;

// Function Prototype
void fun(int);

int main()
{
    int a = 10;

    cout << "Before call of fun A = " << a << endl;

    fun(a);   // a is the actual parameter

    cout << "After call of fun A = " << a << endl;

    return 0;
}

// Function Definition
void fun(int x)   // x is the formal parameter
{
    x = 100;
}