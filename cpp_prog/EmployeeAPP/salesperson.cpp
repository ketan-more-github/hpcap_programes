#include<stdio.h>
#include"salesperson.h"
using namespace std;

salesperson::salesperson()
{
   sales=40;
   comm=50;
}
salesperson::salesperson(int id, const char*n,int d,int m,int y,int h,int r,int s,int c):wageemployee(id,n,d,m,y,h,r)
{
     sales=s;
     comm=c;
}
void salesperson::display()
{
     wageemployee::display();
     cout<<sales<<endl;
     cout<<comm<<endl;
}
int salesperson::salary()
{
   return wageemployee::salary()+sales*comm;
}
