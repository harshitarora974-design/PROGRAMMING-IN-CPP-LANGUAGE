
→ SOLUTIONS OF ASSIGNMENTS OF IF-ELSE STATEMENTS

→ 2. enter mrp of book , give 10% discount if mrp > 1000 otherwise give 5% discount  after discount print net price


#include<iostream>
using namespace std ;

int main()
{
    float mrp , netprice ;
    cout<<"\nenter mrp of book ";
    cin>>mrp ;
    if(mrp>1000)
      netprice = mrp - (mrp*10/100) ;
    else
      netprice = mrp - (mrp*5/100) ;
      
    cout<<"\nnet price of book is "<<netprice ;
    
    return 0;
}


→ 3. enter sale price (sp) and cost price (cp) of book print profit or loss

#include<iostream>
using namespace std ;

int main()
{
    float sp , cp ;
    cout<<"\nenter sale price (sp) and cost price (cp) of book ";
    cin>>sp>>cp ;
    if(sp>cp)
      cout<<"\nprofit is "<<sp-cp ;
    else
      cout<<"\nloss is "<<cp-sp ;
    
    return 0;
}












