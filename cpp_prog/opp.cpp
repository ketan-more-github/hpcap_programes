#include<iostream>
using namespace std;

class Animal{

public :
          virtual void display();
          virtual void voice();

};

 void Animal::display(){
    cout<<"In animal class"<<endl;
 
 }
 void Animal::voice(){
  cout<<"In animal voices"<<endl;
 }
          


class dog::Animal{

public :
          void display();
          void voice();
          
int main(){


dog d1 = new dog();
d1.display();
d1.voice();


return 0;
}
};


