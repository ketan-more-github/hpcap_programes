#include<stdio.h>

int main()
{

int num , sum;
printf("Enter a number to check it perfect or not\n");
scanf("%d" , &num);



for(int i =1; i<num;i++)
{
  if(num%i==0)
  {
  sum = sum + i;
  }
  else
  {
  continue;
  }

}

if(num==sum)
{
printf("Enter a number is perfect Number\n");
}
else
{
  printf("Enter a number is NOT num perfect Number\n");
}
return 0;
}
