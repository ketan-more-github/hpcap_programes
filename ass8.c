#include<stdio.h>

int main()
{
float bs , ts , ns , c;
printf("Enter the base salry of salceman\n");
scanf("%f" , &bs);
printf("Enter the total sale of salceman\n");
scanf("%f" , &ts);

if(ts>=5000 && ts<7500)
{
  c = (float) ts*3/100;
}
else if(ts>=7501 && ts<10500)
{
  c = (float) ts*8/100;
}
else if(ts>10501 && ts<=15000)
{
  c = (float) ts*11/100;
}
else if(ts>=15000)
{
  c = (float) ts*15/100;
}

ns = bs + c;
printf("the net salary of  salceman = %f \n" , ns);
printf("the net commision of  salceman = %f \n" , c);

return 0; 
}
