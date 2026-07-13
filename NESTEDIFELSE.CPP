
→ TOPIC - nested if else 

→ 1. to find the greatest number among three numbers using nested if else statement

#include<iostream>
using namespace std ;

int main()
{
    int a , b , c ;
    cout<<"\nenter three numbers " ;
    cin>>a>>b>>c;
    if(a>b)
      {
        if(a>c)
        { 
           cout<<"\ngreatest number  "  << a ;
        }
        else
        {
          cout<<"\ngreatest number  "  << c ;
        }   
      }
    else 
      {
        if(b>c)
        {
          cout<<"\ngreatest number  "  << b ;
        }
        else 
        {
          cout<<"\ngreatest number  "  <<c ;
        }
      } 
      
    return 0;
    
}


→ 2. if age >= 18 or age <= 45 then print eligible for lic policy otherwise not eligible for lic policy


#include<iostream>
using namespace std ;

int main()
{
    int age ;
    cout<<"\nenter age " ;
    cin>>age ;
    if(age>=18)
      {
        if(age<=45)
        {
          cout<<"\neligible for lic policy " ;
        }
        else
        {
          cout<<"\nnot eligible for lic policy " ;
        }
      }
    else
      {
        cout<<"\nnot eligible for lic policy " ;
      }
      
    return 0;
}





