
#include<iostream>
using namespace std;

int multiply(int a=1 , int b = 1 , int c =1 ,int d=1)
{
  return a*b*c*d;
}


int main()
{
int a = 2,b =5,c = 10,d = 4;


int ans1 = multiply(a,b);
int ans2 = multiply(a,b,c);
int ans3 = multiply(a,b,c,d);
int ans4 = multiply(a,c);

cout<<"multiplication is "<<ans1<<endl;
cout<<"multiplication is "<<ans2<<endl;
cout<<"multiplication is "<<ans3<<endl;
cout<<"multiplication is "<<ans4<<endl;




return 0;
}
