#include<iostream>
using namespace std;


class rect{
public:
        int l; //data members
        int b; //data members

public:         //access specifier
        void accept(); //member function
        void aor(); //member function
};


void rect::accept() //Scope resolution
   {
    cout<<"Enter l and bredth"<<endl;
    cin>>l>>b;
   }
        
  void rect:: aor()
  {
    cout<<l*b<<endl;
  }
   
   
int main()
{
rect r1;      //r1is a object
r1.accept();
r1.aor();
r1.l = 20;
cout<<r1.l<<endl;

return 0;
}






