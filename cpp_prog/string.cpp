#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){

set<char*> v1;



v1.insert("shivam");
v1.insert("siddhesh");
cout<<"size = "<<v1.size()<<endl;
set<char*>::iterator itr;
for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;
v1.insert("kajal");
v1.insert("kajal");
v1.insert("Anita");
for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;
cout<<"size = "<<v1.size()<<endl;

string str;
cout<<"Enter a str : "<<endl;
getline(cin , str);
cout<<str<<endl;




return 0;
}
