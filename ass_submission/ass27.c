#include<stdio.h>

   // 27. Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to perform the tasks.
    //a. Find the transpose of a matrix and print the transpose using display() function.
    //b. Accept another matrix of same dimensions.  Find the addition of two matrices and print the resultant matrix.


  void acceptArray(int  arr[][5])
    {

      printf("Enter the 3x3 matrix element\n");
      for(int i =1;i<=3;i++)
        {

          for(int j =1;j<=3;j++)
            {
              scanf("%d" , &arr[i][j]);
            }
        }


    }

    void displayArray(int arr[][5])
    {  
      printf("Display Of 3 x 3  Array \n");
          for(int i =1;i<=3;i++)
            {

              for(int j =1;j<=3;j++)
                {
                    printf("%d " , arr[i][j]);
                }
              printf("\n");
          }
          
           printf("\n");

      }
      
      void AddArray(int  (*arr)[5] )
    {

      int arr2[5][5];

      printf("Enter the 1st 3x3 matrix element\n");
        for(int i =1;i<=3;i++)
          {

            for(int j =1;j<=3;j++)
              {
                scanf("%d" , &arr[i][j]);
              }
          }

          printf("Enter the element add in a matrix\n");
    
                 for(int i =1;i<=3;i++)
                    {

                    for(int j =1;j<=3;j++)
                        {
                          scanf("%d",&arr2[i][j]);
                        }
                    }
            // addition of a matrix

                        for(int i =1;i<=3;i++)
                          {
                          for(int j =1;j<=3;j++)
                              {
                                arr[i][j] = arr[i][j]  + arr2[i][j] ; 
                               }
                            }
                           
                           printf(" \n");
                            printf("addition of a matrix is \n");

}

void transposeArr(int arr[5][5])
{
  
  int arr2[5][5];
  
  for(int i =1;i<=3;i++)
  {
    for(int j = 1;j<=3;j++)
    {
     arr2[j][i] = arr[i][j] ;       
    
    }
  
  }
   printf("Transpose of matrix is \n");
     for(int i =1;i<=3;i++)
            {

              for(int j =1;j<=3;j++)
                {
                    printf("%d " , arr2[i][j]);
                }
              printf("\n");
          }
  

}

int main()
{


int arr[5][5];
acceptArray(arr);
displayArray(arr);
//AddArray(arr);
//displayArray(arr);
transposeArr(arr);




return 0; 
}
