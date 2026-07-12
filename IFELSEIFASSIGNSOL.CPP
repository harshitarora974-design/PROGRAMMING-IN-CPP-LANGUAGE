/*
→ SOLUTIONS OF ASSIGNMENTS OF  IFELSEIF.CPP
*/


// 2. enter a digit and print it in word
//       0 Zero
//       1 One
//       2 Two
//       3 Three
//         ....

#include<iostream>
using namespace std ; 

int main()
{
    
    int digit ;
    cout<<"\nenter a digit between 1 to 9 " ;
    cin>>digit ;
    if(digit==0)
    {
        cout<<"\nZero" ;
    }
    else if(digit==1)
    {
        cout<<"\nOne" ;
    }
    else if(digit==2)
    {
        cout<<"\nTwo" ;
    }
    else if(digit==3)
    {
        cout<<"\nThree" ;
    }
    else if(digit==4)
    {
        cout<<"\nFour" ;
    }
    else if(digit==5)
    {
        cout<<"\nFive" ;
    }
    else if(digit==6)
    {
        cout<<"\nSix" ;
    }
    else if(digit==7)
    {
        cout<<"\nSeven" ;
    }
    else if(digit==8)
    {
        cout<<"\nEight" ;
    }
    else if(digit==9)
    {
        cout<<"\nNine" ;
    }
    else
    {
        cout<<"\ninvalid digit " ;
    }
    
  return 0;
}


// 3. enter a month of a year print name of the month
//       1 Jan
//       2 Feb
//        ....


#include<iostream>
using namespace std ;


int main()
{
    int month ;
    cout<<"\nenter month number " ;
    cin>>month ;
    if(month==1)
    {
        cout<<"\nJanuary" ;
    }
    else if(month==2)
    {
        cout<<"\nFebruary" ;
    }
    else if(month==3)
    {
        cout<<"\nMarch" ;
    }
    else if(month==4)
    {
        cout<<"\nApril" ;
    }
    else if(month==5)
    {
        cout<<"\nMay" ;
    }
    else if(month==6)
    {
        cout<<"\nJune" ;
    }
    else if(month==7)
    {
        cout<<"\nJuly" ;
    }
    else if(month==8)
    {
        cout<<"\nAugust" ;
    }
    else if(month==9)
    {
        cout<<"\nSeptember" ;
    }
     else if(month==10)
     {
         cout<<"\nOctober" ;
     }
     else if(month==11)
     {
         cout<<"\nNovember" ;
     }
     else if(month==12)
     {
         cout<<"\nDecember" ;
     }
     else
     {
         cout<<"\ninvalid month number " ;
     }

  return 0;
}