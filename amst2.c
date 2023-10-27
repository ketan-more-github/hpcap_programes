#include <stdio.h>
#include<math.h>
int main() {
 int num;
  printf("Enter number\n");
  scanf("%d", &num);
  int sum = 0;
  int num1 = num;
  int num2 = num;
  int cnt = 0;
  
  while(num2!=0)
  {
      
    int rem = num2%10; 
    num2 = num2/10;
    cnt++;
  }
  
  while(num!=0)
  {
  
   int rem = num%10;
    sum+=  pow(rem , cnt);
    num = num/10;
  }
  
  if(sum==num1)
  {
  printf("Enter number %d is a amstrong number\n" , num1);
  }
  else
  {
  printf("Enter number %d is NOT amstrong number\n" , num1);
  }
  
  return 0;
}

 
 
