//Modify above assignment - 32 to hold record of five books.  Display the records of all the books using a function. 
// cout and cin is object 
// ostream -> cout
// cin is object of istream class
#include<stdio.h>



typedef struct Book{
int bookId; 
char title[50];
float price;
}ketan;


void display(ketan b1[5])
{

  
    for(int i = 0; i<3;i++)
    {
    printf("printting.................boookmv details\n");
    printf("%d %s %f\n" , b1[i].bookId , b1[i].title , b1[i].price);
    } 
}

int main(){

 ketan b1[5];

for(int i = 0; i<3;i++)
{
printf("Enter book details\n");
scanf("%d%s%f" , &b1[i].bookId , b1[i].title , &b1[i].price);
}
display(b1);


return 0 ;
}
