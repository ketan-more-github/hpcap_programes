#include<stdio.h>
#include<stdlib.h>
int main()
{
int * p;
 p = (int*) malloc(sizeof(int)*4);
 *(p+1) = 10;
 printf("%d\n" , *(p+1));
 free(p);
 *(p+1) = 10;
  printf("%d\n" , *(p+1));
return 0; 
}
