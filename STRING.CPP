
→ TOPIC - STRING 

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    char *str = (char *)"Hello";
    int i;

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "\nHello " << name << endl;

    // Print each character
    for (i = 0; name[i] != '\0'; i++)
    {
        cout << name[i] << endl;
    }

    // Print string length
    cout << "\n" << name << " is " << i << " characters long" << endl;

    // Print string in reverse
    cout << "\n" << name << " in reverse order is: ";

    for (i = i - 1; i >= 0; i--)
    {
        cout << name[i];
    }

    cout << endl;

    return 0;
}




