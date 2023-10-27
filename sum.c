#include<stdio.h>
#include <time.h>
#include <string.h>


int main()
{

    double sum = 0;
    double sum2 = 0;

  
    for(int i = 1;i<50000;i++){

        sum = sum+i;
    }

    for(int i = 1;i<50000;i++){

        sum2 = sum2+i;
    }

    printf("Addition is = %lf" , sum);
    printf("\n");
    printf("Addition is = %lf\n" , sum+sum2);
 

    return 0;
}
