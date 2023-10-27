#include"wageemployee.h"
class salesperson:public wageemployee     // to take attributes of class wageemployee
{
      int sales;       // private data members
      int comm;
public:
       salesperson();
       salesperson(int,const char*,int,int,int,int,int,int,int);
       int salary();
       void display(); 
};
