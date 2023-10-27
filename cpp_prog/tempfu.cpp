#include<iostream>
using namespace std;

template<typename T>
void swap(T a , T b){

  T temp = a;
  a=b;
  b= temp;
  cout<<a<<"  "<<b<<endl;
}
template<typename T , typename U >
U add(T a , U b ){
  return a+b;
}


int main()
{
  //swap(10 , 2);
  //swap(10.22 , 2.03);
  swap(10 , 25);
  cout<<add(40 , 45.44f)<<endl;

}





















































































