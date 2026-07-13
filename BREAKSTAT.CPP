
→ TOPIC - BREAK STATEMENT 


#include <iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num)
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }

    return 0;
}

// ASSIGNMENTS

→ 1. Print all prime numbers upto 100



