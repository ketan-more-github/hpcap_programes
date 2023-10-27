#include<stdio.h>

//fibonacci serise
void getfibonacci(int upto)
{
  int start = 0 , next = 1 , sum;
  printf("%d %d " , start , next);
  for(int i = 0;i<upto;i++)
  {
    sum = start + next;
    printf("%d " , sum);
    start = next;
    next = sum;
    
  }
  printf("\n");
  }
  


int main()
{
int upto;
printf("Enter the number upto you want fibnacce seris\n");
scanf("%d" , &upto);
getfibonacci(upto);

return 0;
}
