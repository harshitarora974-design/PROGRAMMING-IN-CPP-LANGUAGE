
→ AIM - structure

#include <iostream>
using namespace std;

// Structure definition
struct Book
{
    char name[50];
    int year;
    int sno;
    float price;
};

int main()
{
    Book b1 = {"Let_us_C", 1989, 59, 2500.25};
    Book b2;

    cout << "Enter name, year, serial number and price of the book: ";
    cin >> b2.name >> b2.year >> b2.sno >> b2.price;

    cout << "\nBook Details are:\n";
    cout << "---------------------------------------------\n";
    cout << "Name\t\tYear\tS.No\tPrice\n";

    cout << b1.name << "\t\t"
         << b1.year << "\t"
         << b1.sno << "\t"
         << b1.price << endl;

    cout << b2.name << "\t\t"
         << b2.year << "\t"
         << b2.sno << "\t"
         << b2.price << endl;

    return 0;
}







