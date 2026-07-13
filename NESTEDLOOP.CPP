
→ AIM - nested loop
→ DEFINATION - a loop inside another loop is called nested loop

→ 1. to print stars like : ***
                           ***
                           ***

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}








