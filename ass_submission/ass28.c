#include<stdio.h>


int main()
{
    int a[5][5];
    int b[5][5];
    int c[5][5] = {0};
    
      printf("Enter the 3x3 matrix element\n");
      for(int i =1;i<=3;i++)
        {

          for(int j =1;j<=3;j++)
            {
              scanf("%d" , &a[i][j]);
            }
        }
        
        printf("Enter the 3x3 matrix element\n");
      for(int i =1;i<=3;i++)
        {

          for(int j =1;j<=3;j++)
            {
              scanf("%d" , &b[i][j]);
            }
        }

         

for(int i =1 ; i<=3;i++)
{
  for( int j=1 ; j<=3;j++)
  {
    for( int k =1 ;k<=3;k++)
    {
      c[i][j] = c[i][j] + a[i][k] * b[k][j];     
    }
  }
}
 
 printf("multi of array is \n");
 
  for( int i =1 ; i<=3;i++)
    {
   for( int j =1 ; j<=3;j++)
      {
        printf("%d " , c[i][j]);
  
       } 
      printf("\n");
    }
 
return 0;

}
