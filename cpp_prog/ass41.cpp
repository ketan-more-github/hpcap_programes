
#include<iostream>
#include<string.h>
using namespace std;


class Array{

private:
      int size;
      int *arr;

public:
        Array(); //  default constructor
        Array(int); // parameterized costructor
       // ~Array();  //destructor
        Array(Array &); // copy constructor to avoid doubble free runtime error we need to do deep copy
        void show();
        void accept(int);
};

  Array :: Array(Array &A5){    //declare

    size = A5.size;
    arr = new int [size];//dma
   for(int i =0;i<size;i++)
    {
      arr[i] = A5.arr[i];
    }
}


  /*Array :: ~Array()
  {
  delete []arr;

   }*/
//parameterized constructor.
Array::Array(int a){
  
   size = a;
   arr = new int [size];
    for(int i =0;i<size;i++)
          {
            arr[i] = 1;
          }

}

void Array::show(){

  for(int i =0;i<size;i++)
          {
            cout<<arr[i]<<" "; 
          }


}

 void Array::accept(int n){
  size = n;
  cout<<"Enter array elem"<<endl;
  for(int i =0;i<n;i++)
      {
            cin>>arr[i]; 
         }
 }

Array :: Array(){
          size = 5;
          arr = new int[size];
          for(int i =0;i<size;i++)
          {
            arr[i] = 4;
          }
        }

int main()
{
Array A1;
Array A5;
A1.show();
cout<<endl;
Array A2(12);
A2.show();
cout<<endl;
A5.accept(4);
A5.show();

cout<<endl;
Array A3(A5);   //free(): double free detected in tcache 2 Aborted (core dumped)
A3.show(); 
cout<<endl;  

return 0;
}
