
→ TOPIC - OPERATORS 
→ DEFINATION - Symbols that perform operations on variables and values 
→ TYPES - 
         1. Arithmetic Operators
         2. Relational Operators
         3. Logical Operators
         4. Assignment Operators
         5. Increment and Decrement Operators


                → SOME IMP TERMS 
           
           && table
        r1   r2  result
        1    1    1
        1    0    0
        0    1    0
        0    0    0

           || table
        r1   r2  result
        1    1    1
        1    0    1
        0    1    1
        0    0    0


→ use of increment operators x++ and ++x 

#include <iostream>
using namespace std;

int main() 
{
    int x = 5;
    cout << "Value of x: " << x << endl; // Output: 5

    cout << "Using post-increment (x++): " << x++ << endl; // Output: 5, then x becomes 6
    cout << "Value of x after post-increment: " << x << endl; // Output: 6

    cout << "Using pre-increment (++x): " << ++x << endl; // Output: 7, x becomes 7
    cout << "Value of x after pre-increment: " << x << endl; // Output: 7

    return 0;
}






