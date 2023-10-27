#include<stdio.h>

int * max(int *num1 , int *num2)
{

  if(*num1>*num2)
  {
    return num1;
  }
   else
  {
    return num2;
   }

}

int main(){

int num1 , num2 ;
printf("Please Enter the two numbers\n");
scanf("%d%d" , &num1 , &num2);

int * ptr = max(&num1 , &num2);
printf("%u\n" , ptr);
printf("%u\n" , *ptr);

 
return 0;
}
