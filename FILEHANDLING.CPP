
→ TOPIC - file handling 

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream file;
    char pwd[20];

    cout << "Enter the password: ";
    cin >> pwd;

    int x = strcmp(pwd, "ram");
    int y = strcmp(pwd, "Pram");

    if (x == 0 || y == 0)
    {
        file.open("sum.cpp");

        if (!file)
        {
            cout << "File does not exist...!" << endl;
            return 1;
        }

        char ch;

        while (file.get(ch))
        {
            cout << ch;
        }

        file.close();
    }
    else
    {
        cout << "Enter the correct password..." << endl;
    }

    return 0;
}







