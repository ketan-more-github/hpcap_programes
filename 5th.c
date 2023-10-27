// write  a program t sum of digit

#include<stdio.h>
int main(){
int num;
printf("Enter the Number\n");
scanf("%4d" , &num);
int sum;
while(num!=0)
{
  int temp = num%10;
  sum+=temp;
  num = num/10; 
}

printf("The Sum Of Digit of Number is = %d\n" , sum);

return 0;
}
