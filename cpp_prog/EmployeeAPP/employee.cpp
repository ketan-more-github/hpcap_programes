#include<iostream>
#include"employee.h"
#include<cstring>
using namespace std;

employee::employee()
{
    empid=20;
    strcpy(empname,"Akshay");      //no need to date
}
employee::employee(int id,const char* n,int d,int m,int y):dob(d,m,y)   //member list initilization
{
    empid=id;
    strcpy(empname,n);
}
void employee::display()
{
    cout<<empid<<endl;
    cout<<empname<<endl;
    dob.display();
}
