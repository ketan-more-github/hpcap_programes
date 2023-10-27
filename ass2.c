#include<stdio.h>

int main()
{

float avg;
int a,b,c,d,e;
printf("Please enter Your 5 subject marks\n");
scanf("%d%d%d%d%d" , &a, &b, &c ,&d , &e);
//avg = (a+b+c+d+e)/5.0f;  //implicit type conversion
avg = (float)(a+b+c+d+e)/5;  //explicit type conversion
printf("agerage = %f\n" , avg);
return 0; 
}
