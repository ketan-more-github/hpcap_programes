
#include<iostream>
using namespace std;

class complex{

  int real;
  int img;
  
 public:
          complex();
          complex(int,int);
         int getreal();
         void setreal(int);
         int getimg();
         void setimg(int);
          
};

complex::complex(){
  cout<<"in complex default constructor"<<endl;
}

complex::complex(int a,int b){
 cout<<"in complex parametrize constructor"<<endl;
 real =a;
 img =b;
 }
 
  int complex::getreal()
  {
      return real;  
  }
  
  void complex::setreal(int a)
  {
    real = a;
  }
  
  int complex::getimg()
  {
    return img;
  }
  void complex::setimg(int b)
  {
      img = b;  
  }
          

int main()
{

complex c1;
c1.setimg(500);
c1.setreal(200);
cout<<c1.getreal()<<endl;
cout<<c1.getimg()<<endl;
cout<<endl;
complex c2(10 ,20);
cout<<c2.getreal()<<endl;
cout<<c2.getimg()<<endl;


return 0;
}
