
→ RECURSION - When a function call itself then that function is known as recursive function and process is known as recursion

#include <iostream>
using namespace std;

int x = 0;

int main()
{
    cout << "Hello" << endl;

    if (x < 10)
    {
        x++;
        main();   // Recursion
    }

    return 0;
}






