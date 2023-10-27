#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
printf("Enter the Character to get in opposite Case\n");
scanf("%c" , &ch);
//int asc = (int) ch ; 

//if(asc<97)
//{
//ch = ch+32;
//char ans = (char) ch;
//printf("Opposite case value is= %c\n" , ans);
//}
 //else if(asc>=97)
//{
//ch = ch-32;
//char ans = (char) ch;
//printf("Opposite case value is= %c\n" , ans);
//}
//else
//{
//printf("Please Enter Valid value of a Char\n");
//exit(0);
//}


if(ch>=65 && ch<=90)
{
  ch =ch+32;
}
else if(ch>=97 && ch<=122)
{
  ch =ch-32;
}
else
{
printf("Please Enter Valid value of a Char\n");
exit(0);
}

printf("Opposite case value is= %c\n" , ch);
return 0; 











}
