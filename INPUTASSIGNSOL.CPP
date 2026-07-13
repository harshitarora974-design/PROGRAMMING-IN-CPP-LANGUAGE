
→ SOLUTIONS OF ASSIGNMENTS OF INPUTFROMUSER.CPP 

→ 1 .enter principle , rate and time print simple interest
     HINT -  Simple Interest Formula
                si=p*r*t/100


#include<iostream>
using namespace std;

int main()
{
    int principle , rate , time , simpleinterest ;
    cout<<"\n enter principle = " ;
    cin>>principle ;
    cout<<"\n enter rate = " ;
    cin>>rate ;
    cout<<"\n enter time = " ;
    cin>>time ;
    simpleinterest = principle * rate * time / 100 ;
    cout<<"\n simple interest = " << simpleinterest ;
    
    return 0 ;
}


→ 2. enter marks of 5 subjects and print sum and percentage


#include<iostream>
using namespace std;

int main()
{
    int hindi , english , maths , science , social , sum , percentage ;
    
    cout<<"\n enter marks of 5 subjects = " ;
    cin>>hindi>>english>>maths>>science>>social ;
    sum = hindi + english + maths + science + social ;
    percentage = sum / 5 ;
    cout<<"\n sum = " << sum ;
    cout<<"\n percentage = " << percentage ;
   
    return 0 ;
}


→ 3. enter mrp of book give 10% dis and print net price
 HINT -  Discount Calculation Example:
           dis=mrp*10/100
           net=mrp-dis


#include<iostream>
using namespace std;

int main()
{
    int mrp , discount , netprice ;
    cout<<"\n enter mrp of book = " ;
    cin>>mrp ;
    discount = mrp * 10 / 100 ;
    netprice = mrp - discount ;
    cout<<"\n discount = " << discount ;
    cout<<"\n net price = " << netprice ;

    return 0 ;
}


→ 4. enter 2 nos and print their value after interchange (using temp variable)


#include<iostream>
using namespace std;

int main()
{
    int a , b , temp ;
    cout<<"\n enter 2 nos = " ;
    cin>>a>>b ;
    cout<<"\n before interchange a = " << a ;
    cout<<"\n before interchange b = " << b ;
    temp = a ;
    a = b ;
    b = temp ;
    cout<<"\n after interchange a = " << a ;
    cout<<"\n after interchange b = " << b ;
    
    return 0 ;
}


→ 5. enter 2 nos and print their value after swap(without using temp)
    a=5 
    b=7 


#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    cout<<"\n enter 2 nos = " ;
    cin>>a>>b ;
    cout<<"\n before swap a = " << a ;
    cout<<"\n before swap b = " << b ;
    a = a + b ; // 5 + 7 = 12
    b = a - b ; // 12 - 7 = 5
    a = a - b ; // 12 - 5 = 7
    cout<<"\n after swap a = " << a ;
    cout<<"\n after swap b = " << b ;
    
    return 0 ;
}









