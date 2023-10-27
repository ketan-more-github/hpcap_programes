#include"employee.h"
class wageemployee:public employee    //to copy the attributes of class employee
{
   int hours;
   int rate;
   //nt salary;
public:
       wageemployee();      //default conmstructor
       wageemployee(int,const char*,int,int,int,int,int);  //parameterised constructor
       void display();
       int salary(); 
};


