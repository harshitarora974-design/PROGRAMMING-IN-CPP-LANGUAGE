
→ TOPIC - STORAGE CLASSES

#include <iostream>
using namespace std;

// Function Prototype
void msg();

int main()
{
    msg();
    msg();
    msg();

    return 0;
}

// Function Definition
void msg()
{
    static int x = 1;

    cout << "X = " << x << endl;

    x++;
}





