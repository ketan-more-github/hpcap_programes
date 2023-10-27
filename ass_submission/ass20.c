#include<stdio.h>


//fibonacci serise
  //20. Find the sine value of an angle by calculating the following series up to first 5 items
//s
//Make use of following functions:
//int factorial(int); and int power(int, int);

float factorial(int num)
{
float ans = 1;
for(int i = 1;i<=num;i++)
{
ans = ans*i;
}

return ans;

}

float power(int value, int raise)
{
float pow = 1;
for(int i = 1; i<=raise;i++)
{
  pow = pow*value;
}


return pow;

}

int main()
{
float pow,fact;
float Radian , PI , angleD , angleR , ans;
printf("Enter the Angle in degree\n");
scanf("%f", &angleD);
angleR = (3.142f/180) * angleD;



//fact = factorial(4);
//printf("fact of 5 is= %d\n" , fact);
//pow = power(5 , 3);
//printf("5 raise to  is= %d\n" , pow);


ans = angleR - power(angleR , 3)/factorial(3) + power(angleR ,5)/factorial(5) - power(angleR ,7)/factorial(7) + power(angleR , 9)/factorial(9);

printf("Output sine value is= %.2f\n" , ans);
return 0;
}
