
#include<iostream>
#include<string.h>
using namespace std;


class Laptop{

private:
      int id;
      char *name;
      double price;

public:
        Laptop();
        Laptop(int , char * , double);
        void show();
        ~Laptop();  //destructor
        Laptop(Laptop &); // copy constructor to avoid doubble free runtime error we need to do deep copy

};

Laptop :: Laptop(Laptop &l1){    //declare

   id = l1.id;
   name = new char(strlen(l1.name)+1);   //dma
   strcpy(name , l1.name);
    price = l1.price;
}


 Laptop :: ~Laptop()
 {
  delete []name;

 }

Laptop::Laptop(int a , char *s , double d){
  
  id = a;
  name = new char[strlen(s)+1];
  strcpy(name , s);
  price = d;


}

void Laptop::show(){
cout<<id<<endl;
cout<<name<<endl;
cout<<price<<endl;
cout<<endl;

}

Laptop ::Laptop(){
          id=10;
          name = new char[3];
          strcpy(name , "dell");
          price = 32500.25;
        }

int main()
{
Laptop l1;
l1.show();
Laptop l2(1001 , "lenove" , 5000.255);
l2.show();

Laptop l4(l2);   //free(): double free detected in t cache 2 Aborted (core dumped)
l4.show(); 
cout<<endl;
l2.show();

  
  

return 0;
}
