#include<iostream>
#include<cstring>
using namespace std;


class myExcep{

int lno;
char fn_name[50];
char file[50];

public :  myExcep();
          myExcep(int , const char* ,const char *);
          void show();

};

void myExcep::show(){
cout<<"Line no - "<<lno<<endl;
cout<<"fun name - "<<fn_name<<endl;
cout<<"file name - "<<file<<endl;

}
myExcep::myExcep(int a , const char* str1 , const char * str2)
{
    lno = a;
    strcpy(file , str2);
    strcpy(fn_name , str1);   
}

double divide(int a , int b){
 
 if(b==0)
    throw  myExcep(__LINE__ , __FUNCTION__ , __FILE__);
    
 return (double)a/b;
}


int main()  {


try{

cout<<"in a try block"<<endl;
cout<<divide(10,0)<<endl;

}catch(myExcep e){

  e.show();
}

cout<<"out of try block"<<endl;


}
