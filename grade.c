#include<stdio.h>
int main(){
int marks;
printf("Enter Your Markes\n");
scanf("%2d" , &marks);

if(marks>=75)
{
  printf("You Got A First Class\n");
}

else if(marks<75 && marks>=60)
{
  printf("You Got A Second Class\n");
}

 else if(marks<60 && marks >=35)
{
  printf("You Got A third Class\n");
}
else
{
printf("fail\n");
}


return 0;
}
