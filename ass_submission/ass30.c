//Write a program that calculates the average marks of all the subjects.  The number of subjects //‘n’ is accepted from the user.  Allocate memory dynamically for ‘n’ integers.  Free //the memory when not in use.


#include<stdio.h>
#include<stdlib.h>

int main(){

int cnt;
int sum ,avg;

printf("Enter total number of subjects\n");
scanf("%d",&cnt);

int * marks =  (int*) malloc(sizeof(int)*cnt);

printf("Enter the marks\n");
for(int i =0;i<cnt;i++){
scanf("%d",&marks[i]);

sum = sum+marks[i];
}
avg = sum/cnt;

printf("Average of marks is = %d \n" , avg);

free []marks;



return 0 ;
}
