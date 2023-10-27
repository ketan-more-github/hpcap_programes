#include<stdio.h>

// call by Refrence


void swap(int *a , int *b){
  
  *a = (*a+*b);
  *b = *a-*b;
  *a = *a-*b;
  printf("After Swpping VAlue OF 'A' = %u and Value of B = %u \n" , *a , *b);

}

int main()
{
int a ,b;
printf("Enter a VAlue OF 'A'\n");
scanf("%d" , &a);
printf("Enter a VAlue OF 'B'\n");
scanf("%d" , &b); 

swap(&a ,&b);
printf("By using call by addrerss we change actual value also\n");
printf("a = %d\n" , a);
printf("b = %d\n" , b);

  return 0;

}
