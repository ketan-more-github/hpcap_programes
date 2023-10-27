#include<stdio.h>

int main()
{
int arr[5] = {1,2,3,4,5};
int start = 0;
int end = 5-1;

while(start<end)
{
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  
  start = start+1;
  end = end-1;

}

for(int i = 0; i<5;i++)
{
printf("%d " , arr[i]);
}
return 0;
}
