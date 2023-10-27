
#include<iostream>
using namespace std;


void swap(int &a, int &b)
{
  int temp=a;
  a=b;
  b=temp;
}

int main()
{
int a,b;
cout<<"enter the 'valu' of a and 'b'"<<endl;
cin>>a>>b;
swap(a,b);
cout<<"After swapping A = "<<a<<"and B = "<<b<<endl;


return 0;
}
