
#include<stdio.h>
#include<math.h>
int main()
{


int total = 21;
int cnt = 0;
int useript;
for(int i = 0 ; i<4;i++)
{
printf("Enter A number between 1 to 4 and total capacity is 21\n");
scanf("%d" , &useript);

switch(useript){
case 1 : cnt = cnt+4+useript;
        printf("Computer Choose 4 \n");
        printf("Total is %d\n",cnt );
          break;  
case 2 : cnt = cnt+3+useript;
         printf("Computer Choose 3 \n");
         printf("Total is %d\n",cnt );
          break;
case 3 : cnt = cnt+2+useript;
          printf("Computer Choose 2 \n");
          printf("Total is %d\n",cnt );
         break;
case 4 : cnt = cnt+1+useript;
          printf("Computer Choose 1 \n");
          printf("Total is %d\n",cnt );
       break;
}


}

if(total-cnt==1)
{
printf("Total is 20 and 1 is Remainig\n");
printf("Computer WIN YOU LOOSE\n");
}
else
{
printf(" You WIN ");
}

return 0;
}
    


