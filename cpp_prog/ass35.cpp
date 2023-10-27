
#include<iostream>
using namespace std;

int avg_marks(int arr[] , int size)
{

  int sum =0;
  for(int i =0;i<size;i++)
  {
    sum = sum+arr[i];
    
  }
  return sum/size;
}

void display(int arr[] , int size)
{
      for(int i =0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }

}

int main()
{

int size;
cout<<"Enter the total number of subject YOU have  "<<endl;
cin>>size;

int *arr = new int[size];

cout<<"Enter the  Marks of each subject "<<endl;

for(int i =0;i<size;i++)
{
  cin>>arr[i];
}


cout<<"Average marks of a student is = "<<avg_marks(arr,size)<<endl;

cout<<"Marks of students are are =";
display(arr , size);
cout<<endl;

return 0;
}
