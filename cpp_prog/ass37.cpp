
#include<iostream>
using namespace std;

int add(int a , int b)
{

return a+b;
}

float add(float a , float b)
{

return a+b;
}

double add(double a , double b)
{

return a+b;
}
int main()
{

int intval = add(100 , 200);
cout<<intval<<endl;

float flval = add(100.45f , 200.200f);
cout<<flval<<endl;

double dbval = add(1000000.2 , 200400.544);
cout<<dbval<<endl;
return 0;
}
