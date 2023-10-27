#include<iostream>
#include<list>
using namespace std;
int main(){

list<char*> v1;



v1.push_back("shivam");


v1.push_back("siddhesh");
//v1.push_back(30);

//v1.push_back(30);
//v1.push_back(50);

cout<<"size = "<<v1.size()<<endl;

list<char*>::iterator itr;

for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;

v1.push_front("kajal");


for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;
cout<<"size = "<<v1.size()<<endl;





return 0;
}
