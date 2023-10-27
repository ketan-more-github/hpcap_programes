#include"emp.h"

class wage_emp:public emp

{
  int hr;
  int rate;
  
  public : wage_emp();
           wage_emp(int , char* ,int,int,int,int,int);
           void display();     
  
};
