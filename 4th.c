#include<stdio.h>
int main(){
int a , b;
printf("Enter the value of A\n");
scanf("%d" , &a);
printf("Enter the value of B\n");
scanf("%d" , &b);
a = (a+b);
b = a-b;
a = a-b;

printf("After swapping A is  = %d\n" , a);
printf("After swapping B is  = %d\n" , b);
return 0;
}
