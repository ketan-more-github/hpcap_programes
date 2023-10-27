#include<iostream>
using namespace std;


class polygon{

public:
        virtual double cal_area() = 0;
        virtual double cal_peri() = 0;
  

};

      //circle

class circle:public polygon{
  int radius;
  
  public: 
          circle();
          circle(int);
         double cal_area();
         double cal_peri();
};

circle::circle()
{
  radius = 10;
}

 circle::circle(int r){
  radius = r;
 
 }
 double circle:: cal_area()
  {
    return 3.14*radius*radius;
  }
  double circle ::  cal_peri()
  {
    return 2*3.14*radius;
  }
  
      //rectangle
  
class Rectangle:public polygon{
  int l;
  int b;
  
  public: 
          Rectangle();
          Rectangle(int , int);
         double cal_area();
         double cal_peri();
};

Rectangle::Rectangle(){

    l = 1;
    b = 1;
}
Rectangle::Rectangle(int ln , int br){
  
    l = ln;
    b = br;
}
        
double Rectangle:: cal_area(){
  
    return l*b;
  }
  double Rectangle:: cal_peri(){
  
    return 2*(l+b);
  }
  
      //squre
  
  class squre:public Rectangle{
  
  public: 
          squre();
          squre(int);
         double cal_area();
         double cal_peri();
};

squre::squre(){

}
squre::squre(int s):Rectangle(s,s){

}
        
  double squre::cal_area(){
  
    return Rectangle::cal_area();
  }
  
  double squre::cal_peri(){
  
    return Rectangle::cal_peri();
  }


int main() 
  {  
  circle  r1(2);
  //polygone *ptr= new Rectangle(40 ,20);
  polygon *ptr = &r1 ;
  cout<<ptr->cal_area()<<endl;

return 0;
}
