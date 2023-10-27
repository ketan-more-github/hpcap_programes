#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v1;
cout<<"size = "<<v1.size()<<endl;
cout<<v1.capacity()<<endl;

v1.push_back(10);
cout<<"size = "<<v1.size()<<endl;
cout<<v1.capacity()<<endl;
v1.push_back(20);
v1.push_back(30);
cout<<"size = "<<v1.size()<<endl;
cout<<v1.capacity()<<endl;
v1.push_back(30);
cout<<"size = "<<v1.size()<<endl;
cout<<v1.capacity()<<endl;
v1.push_back(50);
cout<<"size = "<<v1.size()<<endl;
cout<<v1.capacity()<<endl;
vector<int>::iterator itr;
for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;

v1.pop_back();


for(itr = v1.begin(); itr!=v1.end();itr++){
    
          cout<<*itr<<" ";
}
cout<<endl;

return 0;
}
