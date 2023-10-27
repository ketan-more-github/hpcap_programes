#include<iostream>
using namespace std;

int add(int a, int b )
{

return a+b;
}

float add(float a, int b )
{

return a+b;
}


int add(int a, int b , int c )
{

return a+b+c;
}
int add(int a, int b ,int c , int d )
{

return a+b+c+d;
}

int main()
{


cout<<add(1,2.52f)<<endl; //23
cout<<add(1,2,40)<<endl; //53
cout<<add(1,2,40,2)<<endl; //45

return 0;
}


