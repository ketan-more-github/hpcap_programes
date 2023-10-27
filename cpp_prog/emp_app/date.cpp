#include<iostream>
#include"date.h"

using namespace std;

date::date()
{
  dd=13;
  mm=07;
  yy=2000;

}

date::date(int d , int m , int y)
{
  dd=d;
  mm=m;
  yy=y;
}

void date::display()
{

cout<<dd<<"/"<<mm<<"/"<<yy<<endl;

}
