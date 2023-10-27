#include<iostream>
#include"wage_emp.h"

using namespace std;

int main()
{
//date d1;
//date d2(13 , 8 , 2000);
//d1.display();
//d2.display();
//cout<<endl;
//emp e1;
//e1.display();
//emp e2(1001 , "shivam" , 12 , 12,2012);
//cout<<endl;
//e2.display();
//cout<<endl;

//wage_emp w1;
//w1.display();
//cout<<endl;
//wage_emp w2(123 , "text" , 13,7,2000,8,5000);
//w2.display();


emp *eptr;
wage_emp we;

eptr = &we;
eptr->display();
return 0;
}
