#include<stdio.h>

int main()
{
float bs  ,gross_salary , hra , da , pf , net_salary;
printf("hey emp Enter your base salary\n");
scanf("%f" , &bs);

hra = bs * 15/100;
da =  bs * 30/100 ;
gross_salary = bs+hra+da;
pf = 12.5/100 * gross_salary;

net_salary = gross_salary - pf;

printf("NET salary OF EMP = %f \n" , net_salary);


return 0; 
}
