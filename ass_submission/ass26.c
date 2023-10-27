#include<stdio.h>
int main()
{
int arr[50];
  int idx , cnt , elm;
  printf("Enter the cnt of Array Elements\n");
  scanf("%d" , &cnt);
  printf("Enter  Array Elements\n");
  for(int i= 0 ;i<cnt;i++)
  {
    scanf("%d" , &arr[i]);
  }
  printf("You Enter  Array Elements are\n");
  
 for(int i= 0;i<cnt;i++)
  {
    printf("%d " , arr[i]);
  }

   printf("\nEnter The Index Of the Element Which You Want To Add the element\n");
   scanf("%d" , &idx);
   printf("\nEnter The value Of the Element Which You Want To Add \n");
   scanf("%d" , &elm);
   cnt++;
   int min = arr[0];
   
   for(int i =0;i<=cnt;i++)
    {
      if(arr[i]<min)
      {
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
      }
    }
  
  
  
   for(int i= 0;i<cnt;i++)
  {
    printf("%d " , arr[i]);
  }

return 0;
}
