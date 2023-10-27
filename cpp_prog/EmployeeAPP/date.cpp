#include<iostream>
#include"date.h"
using namespace std;

Date::Date()
{
    date=12;
    month=10;
    year=2020;
}
Date::Date(int d, int m, int y)
{
    date=d;
    month=m;
    year=y;
}
void Date::display()
{
    cout<<date<<"/"<<month<<"/"<<year<<endl;

}
