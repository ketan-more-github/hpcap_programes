#include<stdio.h>
int main()
{
  int arr[50];
  int idx , cnt;
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
  
   printf("\nEnter The Index Of the Element Which You Want To delete\n");
   scanf("%d" , &idx);
   
 
  for(int i=idx ;i<cnt;i++)
  {
      arr[i] = arr[i+1];   
  }
  cnt--;
  
   for(int i= 0;i<cnt;i++)
  {
    printf("%d " , arr[i]);
  }

return 0;
}
