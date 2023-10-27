#include<iostream>
#include"wageemployee.h"
using namespace std;

wageemployee::wageemployee()
{
    hours=25;         //no need to declere other attributes they will directly call 
    rate=5000;          //by one construcor
}
wageemployee::wageemployee(int id,const char*n,int d,int m, int y,int h,int r):employee(id,n,d,m,y)
{
    hours=h;                      //above one is the base initilisation list
    rate=r;
}
void wageemployee::display()
{
   employee::display();
   cout<<hours<<endl;
   cout<<rate<<endl;
}
int wageemployee::salary()
{
    return hours*rate;
}

