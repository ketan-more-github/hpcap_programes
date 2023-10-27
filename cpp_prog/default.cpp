#include<iostream>
using namespace std;

int add(int, int ,int = 10 , int = 10);

int main()
{


cout<<add(1,2)<<endl; //23
cout<<add(1,2,40)<<endl; //53
cout<<add(1,2,40,2)<<endl; //45

return 0;
}

int add(int a, int b ,int c , int d)
{

return a+b+c+d;
}
