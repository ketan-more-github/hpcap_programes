#include<iostream>
using namespace std;

//// satack with generic data using template

template<typename T>
class stack{
    
    T *arr;
    int top;
    int size;

  public: 
            stack();
            stack(int);
            T pop();
            void push(T);
            bool isEmpty();
            bool isfull();
            int get_size();
};

template<typename T>

stack<T>::stack(){
  size = 5;
  top = -1;
  arr = new T[size];
  
}

template<typename T>

stack<T>::stack(int s){
  size = s;
  arr = new T[s];  
  top = -1;
  
}

template<typename T>
 T stack<T>::pop(){
  
    if(!isEmpty())
        return arr[top--];  
    else
    {
      cout<<"underflow"<<endl;
      return 0;
    }
  
 }
template<typename T>
 void stack<T>:: push(T val){
    
    if(!isfull()){
         arr[++top] = val;  
    }
    else
    {
      cout<<"Overflow"<<endl;
  
    }
  
 }
 template<typename T>
  bool stack<T>:: isEmpty(){
    
    return top==-1;
  
  }
  template<typename T>
   bool stack<T>:: isfull(){
    return top==size-1;
   }
   
   template<typename T>
   int  stack<T>::get_size(){
   return top+1;
   }


int main()
{
  stack<int> s1(5);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  
  
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;
  cout<<s1.pop()<<endl;

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
