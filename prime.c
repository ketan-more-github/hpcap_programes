#include<stdio.h>
int main()
{

  int num;
  printf("Enter number\n");
  scanf("%d", &num);
  int cnt = 0;
  
 
  
  for(int i = 2; i<num ; i++)
  {
    if(num%i==0)
    {
      cnt++;  
    }
    else
    {
    
    }
  }
  
  if(cnt==0)
  {
  printf("prime number \n");
  }
  if(cnt>0)
  {
  printf("Not prime number \n");
  }
    
  return 0;
  }
