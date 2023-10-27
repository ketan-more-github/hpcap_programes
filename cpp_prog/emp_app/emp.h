#include"date.h"

class emp{

  int emp_id;
  char name[20];
  date d2;
  
  public :
            emp();
            emp(int , char* , int ,int ,int );
            virtual void display();

};
