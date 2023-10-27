#include<iostream>
#include<cmath>
using namespace std;

class complex{

  
  int img;
  int real;


public : 
          complex();
          complex(int , int);
          void display();
          complex operator+(complex &);
          complex operator-();



};

complex::complex(int a , int b){

  real = a;
  img = b;

}

complex::complex(){

  real = 0;
  img = 0;

}

void complex::display(){

char ch=(img>0)?'+':'-';
cout<<real<<ch<<abs(img)<<"i"<<endl;

}

complex complex::operator+(complex &a){

  complex temp;
  temp.real = real+a.real;
  temp.img = img+a.img;
  return temp;
}

complex complex::operator-(){

  complex temp;
  temp.real =- real;
  temp.img =- img;
  return temp;
}


int main(){

complex c1(10 , 20);
complex c2(15 , 30);
complex c3;
c1.display();
c2.display();
c3 = c1+c2; // c3 = c1.operaor+(c2)

c3.display();
c3=-c2;
c3.display();

return  0 ;
}







