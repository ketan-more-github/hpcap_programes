#include<iostream>
using namespace std;

int main()
{


int *arr = (int*) calloc(5 , sizeof(int));

cout<<"Enter the  array Element "<<endl;

for(int i =0;i<5;i++)
{
  cin>>arr[i];
}

arr = (int*) realloc(arr , sizeof(int)*7);
cout<<"enter two more int"<<endl;

for(int i =5;i<7;i++)
{
  cin>>arr[i];
}


cout<<"Enter the  array Element are ="<<endl;
for(int i =0;i<7;i++)
{
  cout<<arr[i]<<endl;
}

delete[]arr;
return 0;
}
