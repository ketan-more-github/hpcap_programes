#include<stdio.h>

// call by value
void swap(int a , int b){
  
  a = (a+b);
  b = a-b;
  a = a-b;
  printf("After Swpping VAlue OF 'A' = %d and Value of B = %d \n" , a ,b);

}

int main()
{
int a ,b;
printf("Enter a VAlue OF 'A'\n");
scanf("%d" , &a);
printf("Enter a VAlue OF 'B'\n");
scanf("%d" , &b); 
swap(a ,b);
printf("%d\n" , a);
printf("%d\n" , b);

  return 0;

}
