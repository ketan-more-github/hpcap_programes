#include<stdio.h>

int main()
{
  //**********for loop
  int ipt;
  printf("Enter number to get its table\n");
  scanf("%d", &ipt);
  
  for(int i = 10; i>=1 ; i--)
  {
    printf("%d " , i*ipt);
  }
  printf("\n");
  
  
   //************  while loop
  int cnt = 1;
  while(cnt<=10)
  {
     printf("%d " , cnt*ipt);
     cnt++;
  }
  printf("\n");
  
  //************ do while
  int num;
  int s=1;
  int fact = 1;
  do{
  printf("Enter number\n");
  scanf("%d", &num);

  
  }while(num<0);
  

  
  return 0;
}
