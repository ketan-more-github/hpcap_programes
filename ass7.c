#include<stdio.h>

int main()
{
int year;
printf("Enter a value of year\n");
scanf("%d" , &year);

//if(year%4==0 && year%100!=0  || year%400==0 )
//{
//printf("its leap year \n");
//}
//else{
//printf("its Not Leap year\n");
//}

(year%4==0 && year%100!=0  || year%400==0 )?printf("its leap year \n"):printf("its Not Leap year\n");



return 0; 
}
