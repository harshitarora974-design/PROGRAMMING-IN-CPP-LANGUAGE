/*
→ TOPIC - SWITCH CASE 
*/

#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter day of the week (1-7): ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid Input - Day should be between 1 and 7";
            break;
    }

    return 0;
}

/*
1. enter a digit and print it in word. 0 Zero, 1 One
2. enter a char and check it it vowel or consonant
*/