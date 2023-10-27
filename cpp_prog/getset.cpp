#include<iostream>
using namespace std;

class squre{

private:        //if no accces specifier thn its private
        int side;

 public:
        squre();
        squre(int);
        void aos();

};

squre::squre()
{
 cout<<"im a squre"<<endl;
}

squre::squre(int k)
{
 side = k;
}

void squre::aos()
{
 cout<<"area of squre = "<<side*side<<endl;
}
int main()
{
squre s1;
squre s2(5);
s2.aos();


return 0;
}

  



