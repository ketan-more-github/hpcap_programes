   // 52. Modify above class Stack in assignment 50 to handle “overflow” and “underflow”   //exceptions using exception handling feature.

    //51. Write a template class Stack (LIFO) having -
	//Date members –  Size(int),   Top of stack (int),  Pointer of type T
          //     Functionalities- Default constructor, push, pop, display
//Test this code for pushing integers, doubles, complex objects.



#include<iostream>
using namespace std;

template<typename T>
class stack{
    T *arr;
    int size;
    int top;
    
  public :  stack();
            stack(int);
            void push(T);
            T pop();
            bool isfull();
            bool isempty();
            int getsize();
            stack(int , const char* , const char*);  
    

};


    template<typename T>
    stack<T>::stack(){
    
    size = 5;
    top = -1;
    arr = new  T[size];
    
    }
    
    template<typename T>
    stack<T>::stack(int s){
    size = s;
    top = -1;
    arr = new T[s];
     
    }
    
    template<typename T>
    void stack<T>::push(T sz){
    if(!isfull()){
       arr[++top] = sz; 
    }
    else
    {
      //cout<<"overflow"<<endl;
    }
    
    }
    
    
    template<typename T>
    T stack<T>::pop(){
    
    if(!isempty())
        return arr[top--];
    else{
   // cout<<"underflow";
    return 0;
    }
    
    }

      template<typename T>    
    bool stack<T>::isfull(){
          return top==size-1;
    }
    
    
    template<typename T>
    bool stack<T>::isempty(){
      return top==-1;

    }
    
   template<typename T>
   int  stack<T>::getsize(){
   return top+1;
   }

int main(){


  try{
  stack<int> s1(3);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;
    }catch(...){
    
    cout<<"underflow"<<endl;
    }
  stack<char*> s2(5);
  s2.push("ketan");
  s2.push("keta");
  s2.push("ket");
  s2.push("ke"); 
  s2.push("k");
  cout<<endl;
  cout<<s2.pop()<<endl;
  cout<<s2.pop()<<endl;
  cout<<s2.pop()<<endl;
  cout<<s2.pop()<<endl;
  cout<<s2.pop()<<endl;



return 0;
}
