#include<stdio.h>

int main()
{
int a ,b ,c;
 a = 100;
 b = 200;
 int temp = a;
 a = b;
 b = temp;
printf("after swap A 100 = %d and b 200 = %d\n" ,a,b);

int a2 = 10;
int b2 = 20;

a2 = a2+b2;
b2 = a2-b2;
a2 = a2-b2;
printf("after swap A 10 = %d and b 20 = %d\n" ,a2,b2);

return 0; 
}
