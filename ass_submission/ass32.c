//Define a structure “Book” having members – bookId, title, price.  Use typedef to name this //structure //“BOOK”.  Accept the data for a book and display the record.


#include<stdio.h>

struct Book{
int bookId; 
char title[50];
float price;
};

int main(){
typedef struct Book BOOK;
BOOK b1;
BOOK b2;
printf("Enter book details\n");
scanf("%d%s%f" , &b1.bookId , &b1.title , &b1.price);
printf("%d  %s  %f \n" ,b1.bookId , b1.title , b1.price );

printf("Enter 2nd book details\n");
scanf("%d%s%f" , &b2.bookId , &b2.title , &b2.price);
printf("%d  %s  %f \n" ,b2.bookId , b2.title , b2.price );


return 0 ;
}
