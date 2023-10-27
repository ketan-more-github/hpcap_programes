#include<iostream>
using namespace std;


class A{
};

double divide(double a , double b){
 A a1;
 if(b==0)
    throw 'x';
 return (double)a/b;
}



int main()  {


try{

cout<<"in a try block"<<endl;
cout<<divide(10,0)<<endl;


}catch(int a){

  cout<<"int - deonometer is zero"<<a<<endl;
}


catch(char const *b){

  cout<<"char* - deonometer is zero"<<b<<endl;
}


catch(double d){

  cout<<"double - deonometer is zero"<<d<<endl;
}


catch(A obj){

  cout<<"A - deonometer is zero"<<endl;
}

  
//catch(...){

 // cout<<" universal deonometer is zero"<<endl;
//}

cout<<"out of try block"<<endl;


}
