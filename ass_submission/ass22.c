#include<stdio.h>

void getDate(int *date, int *month , int *year)
{
  
 printf("Please Enter the date\n");
 scanf("%u" ,date );
 
 printf("Please Enter the Month\n");
 scanf("%u" ,month );
 
 printf("Please Enter the Year\n");
 scanf("%u" ,year);
  
}
int main(){

int d , m , y;
getDate(&d , &m , &y);
printf("Enter date is %d/%d/%d\n" , d,m,y);
return 0;
}
