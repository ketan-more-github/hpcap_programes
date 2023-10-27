#include"date.h"
class employee
{
     int empid;
     char empname[20];
     Date dob;
public:
       employee();
       employee(int, const char*,int,int,int);
       virtual void display();
};

