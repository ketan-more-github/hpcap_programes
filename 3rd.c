#include<stdio.h>
int main(){
int a , b;
printf("Enter the value of A\n");
scanf("%d" , &a);
printf("Enter the value of B\n");
scanf("%d" , &b);

int temp = a;
a=b;
b=temp;
printf("After swapping A is  = %d\n" , a);
printf("After swapping B is  = %d\n" , b);
return 0;
}
