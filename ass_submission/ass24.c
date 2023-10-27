#include<stdio.h>

void minmax(int arr[])
{
  int max , min;
  max= arr[0];

  for(int i =0;i<5;i++)
    {
      if(arr[i]>max)
      {
        max = arr[i];
      }
    }
  printf("maximum value of a array is = %d\n" , max);
  
  min= arr[0];

  for(int i =0;i<5;i++)
    {
      if(arr[i]<min)
      {
        min = arr[i];
      }
    }
  printf("minimum element value of a array is = %d\n" , min);
}


void multi(int arr[] , int mult)
{
  for(int i =0;i<5;i++)
    {
     arr[i] = arr[i]*mult;
    }
    
   int arr2[5];
   
    for(int i =0;i<5;i++)
    {
     arr2[i] = arr[i];
    }
    
    
    
      for(int i =0;i<5;i++)
    {
      printf("%d " , arr2[i]); 
    }

}


int main()
{
 int arr[5];
 int ch , cnt;
 printf("Enter 1 to choose minmax\n");
 printf("Enter 2 to choose multiply by number whole array\n");
 printf("Enter 0 to exit\n");
 scanf("%d",&ch);
 while(ch!=0)
 {
 
 if(ch==1)
 {
   printf("Enter the size Array Elements\n");
   scanf("%d",&cnt);
   printf("Enter  Array Elements\n");
  for(int i= 0 ;i<cnt;i++)
  {
    scanf("%d" , &arr[i]);
  }
  
   minmax(arr);
  break;
 }
 
 if(ch==2)
 {
  int mult; 
   printf("Enter the size Array Elements\n");
   scanf("%d",&cnt);
   printf("Enter  Array Elements\n");
  for(int i= 0 ;i<cnt;i++)
  {
    scanf("%d" , &arr[i]);
  }
   printf("Enter the value of number which is Multiplier\n");
   scanf("%d" , &mult);
  
    multi( arr,mult);
   break;
  
  }
}

 
  


return 0;
}
