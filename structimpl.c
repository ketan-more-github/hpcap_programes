#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct laptop{
  int srno;
  char brand[50] ;
  double price;

};


int main()
{
struct laptop l1 = {100 , "dell" , 5000};
printf("%d  %s  %lf \n" ,l1.srno ,  l1.brand  , l1.price );

struct laptop l2;

printf("Enter Laptop details\n");
scanf("%d%s%lf" , &l2.srno , &l2.brand , &l2.price);
printf("%d  %s  %lf \n" ,l2.srno ,  l2.brand  , l2.price );

struct laptop l3 , *lptr ;
lptr = &l3;

printf("Enter Laptop details\n");
scanf("%d%s%lf" , &lptr->srno , &lptr->brand , &lptr->price);
printf("%d  %s  %lf \n" ,lptr->srno ,  lptr->brand  , lptr->price );


return 0;
}
