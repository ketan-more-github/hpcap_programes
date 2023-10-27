#include<iostream>
#include"emp.h"
#include<cstring>
using namespace std;

emp::emp(){
  emp_id = 10;
  strcpy(name , "ketan");
  
}
emp::emp(int id ,  char* nm, int d ,int m ,int y ) : d2(d,m,y)
{
    emp_id = id;
    strcpy(name ,  nm );
    

}
 void emp:: display(){
  cout<<emp_id<<endl;
  cout<<name<<endl;
  d2.display();
};
