#include<iostream>
using namespace std;

int avg_marks(int arr[])
{
  int sum =0;
  int cnt =0;
  for(int i =0;i<sizeof(arr);i++)
  {
    sum = sum+i;
    cnt++;
  }
  return sum/cnt;
}

void display(int arr[])
{
      for(int i =0;i<size;i++)
    {
      cout<<arr[i]<<endl;
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

int avg = avg_marks(arr);
cout<<"Average marks of a student is = "<<avg<<endl;

cout<<"Marks of students are are ="<<endl;
display(arr);

delete[]arr;

return 0;
}
