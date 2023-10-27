#include<stdio.h>

int main()
{
int l , b;
printf("Enter the length of  a rectangle\n");
scanf("%d" , &l);
printf("Enter the breadth of  a rectangle\n");
scanf("%d" , &b);

for(int i =1; i<=l;i++)
{
  for(int j =1; j<=b;j++)
  {
    if(i == 1 || i == l || j == 1  || j == b )
    {
    
    printf("*");
    }
    else
    {
    printf(" ");
    }
  }
  printf("\n");
}

return 0;
}
