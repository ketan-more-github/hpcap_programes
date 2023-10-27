#include<stdio.h>

int main()
{
int ch ,a ,b;
printf("choose 1 for addition\n");
printf("choose 2 for Subtraction\n");
printf("choose 3 for Multiplication\n");
printf("choose 4 for division\n");

scanf("%d", &ch);

   switch(ch)  
  {
    case 1: 
           printf("Enter the two value for addition\n");
           scanf("%d%d", &a, &b);
           int ans = a+b;
           printf("addition of two num is = %d\n" , ans);
           break;

    case 2: 
            printf("Enter the two value for Subtraction\n");
            scanf("%d%d", &a, &b);
            int ans1 = a-b;
            printf("subtraction of two num is = %d\n" , ans1);
            break;

    case 3: 
          printf("Enter the two value for multiply\n");
          scanf("%d%d", &a, &b);
          int ans2 = a*b;
          printf("addition of two num is = %d\n" , ans2);
          break;
          
    case 4: 
          printf("Enter the two value for division\n");
          scanf("%d%d", &a, &b);
          int ans3 = a/b;
          printf("addition of two num is = %d\n" , ans3);
          break;
}



return 0;


}
