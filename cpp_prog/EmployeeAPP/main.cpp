#include<iostream>
#include"salesperson.h"
using namespace std;
int main()
{
    Date d1;
    d1.display();
    
    Date d2(13,07,1997);
    d2.display();
    
    employee E1;
    E1.display();
    
    employee E2(101,"Chetan",15,9,2012);
    E2.display();
    
    wageemployee WE1;
    WE1.display();
    
    wageemployee WE2(201,"siddhant",01,12,1998,278,3000);
    WE2.display();
    
    salesperson SP1;
    SP1.display();
    
    salesperson SP2(104,"ketan",23,10,1998,50,1000,100,50);
    SP2.display();
    
    cout<<"salary of salesperson = "<<SP2.salary()<<endl;
    
    employee *Eptr;         
    wageemployee WE3;
    
    Eptr=&WE3;             //without virtual function
    Eptr->display();
    
return 0;
}
