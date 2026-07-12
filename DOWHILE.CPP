/*
→ TOPIC - DO WHILE LOOP
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, r, choice;

    do
    {
        cout << "Enter 2 numbers: ";
        cin >> n1 >> n2;

        r = n1 + n2;

        cout << "Sum = " << r << endl;

        cout << "Enter 1 to continue and any other number to exit: ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}

/*
Assignment :

1. Sum
2. Subtract
3. Product
4. Division
*/