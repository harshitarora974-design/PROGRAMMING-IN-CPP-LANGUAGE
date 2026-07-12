/*
→ TOPIC - if else if statement
*/

// 1. to print weekday name using if else if statement


#include<iostream>
using namespace std ;

int main()
{
    int day ;
    cout<<"\nenter day number " ;
    cin>>day ;
    if(day==1)
    {
        cout<<"\nMonday" ;
    }
    else if(day==2)
    {
        cout<<"\nTuesday" ;
    }
    else if(day==3)
    {
        cout<<"\nWednesday" ;
    }
    else if(day==4)
    {
        cout<<"\nThursday" ;
    }
    else if(day==5)
    {
        cout<<"\nFriday" ;
    }
    else if(day==6)
    {
        cout<<"\nSaturday" ;
    }
    else if(day==7)
    {
        cout<<"\nSunday" ;
    }
    else
    {
        cout<<"\ninvalid day number " ;
    }
    
  return 0;
}


/*

                              ASSIGNMENTS 

2. enter a digit and print it in word
       0 Zero
       1 One
       2 Two
       3 Three
         ....

3. enter a month of a year print name of the month
       1 Jan
       2 Feb
        ....

                            SOLUTIONS ON " IFELSEIFASSIGNSOL.CPP "
*/