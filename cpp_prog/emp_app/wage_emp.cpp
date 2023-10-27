#include"iostream"
#include"wage_emp.h"
using namespace std;

 wage_emp::wage_emp(){
 
  hr = 0;
  rate = 0;
 
 }
wage_emp::wage_emp(int id , char* nm ,int d,int m,int y,int h,int r) :emp(id,nm,d,m,y)
{

  hr = h;
  rate =r;

}

void wage_emp::display(){

emp::display();
cout<<hr<<endl;
cout<<rate<<endl;
}
            
  
